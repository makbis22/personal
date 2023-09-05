#include <MQUnifiedsensor.h>  //MQUnifiedsensor by Miguel
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include "DHT.h"  //DHT sensor library by Adafruit
#include <ESP8266WebServer.h>

//핀 번호
#define FAN1 D1
#define FAN2 D2
#define USONIC D3
#define LAMP D4
#define DHTPIN D5
#define pin A0

//Definitions
#define placa "ESP8266"
#define Voltage_Resolution 5
#define type "MQ-135"           //MQ135
#define ADC_Bit_Resolution 10   // For arduino UNO/MEGA/NANO
#define RatioMQ135CleanAir 3.6  //RS / R0 = 3.6 ppm
//#define calibration_button 13 //Pin to calibrate your sensor
#define DHTTYPE DHT22

//모듈 on/off : on - 1 / off - 0

int fanState = LOW;
int prevFanState = LOW;
int lampState = LOW;
int prevLampState = LOW;
int uSonicState = LOW;
int prevUSonicState = LOW;

// WiFi definitions
const char* ssid = "xpi";
const char* password = "smartiot";

// Server URL
const char* host = "http://175.205.128.9:9797";

//Declare Sensor
MQUnifiedsensor MQ135(placa, Voltage_Resolution, ADC_Bit_Resolution, pin, type);
DHT dht(DHTPIN, DHTTYPE);

// Declare WiFi client
WiFiClient client;
HTTPClient http;
ESP8266WebServer server;

bool manual = false;
bool prevManual = true;

int minHumid = 60;
int maxHumid = 70;


void handleManual() {
  // Handle the HTTP request here. You can read the arguments with server.arg("name").
  prevManual = manual;
  manual = true;
  prevFanState = fanState;
  fanState = HIGH;
  prevUSonicState = uSonicState;
  uSonicState = HIGH;
  digitalWrite(FAN1, HIGH);
  digitalWrite(FAN2, HIGH);
  digitalWrite(USONIC, HIGH);
  // Here, we simply send a HTTP 200 OK response.
  server.send(200, "text/plain", "Received manual control request");
  Serial.println("Manual ON");
}

void handleAuto() {
  // Handle the HTTP request here. You can read the arguments with server.arg("name").
  prevManual = manual;
  manual = false;
  // Here, we simply send a HTTP 200 OK response.
  server.send(200, "text/plain", "Received auto control request");
  Serial.println("Manual off");
}

void handleFanOn() {
  prevFanState = fanState;
  fanState = LOW;
  digitalWrite(FAN1, LOW);
  digitalWrite(FAN2, LOW);
  server.send(200, "text/plain", "Fan turned on");
  Serial.println("fan ON");
}

void handleFanOff() {
  prevFanState = fanState;
  fanState = HIGH;
  digitalWrite(FAN1, HIGH);
  digitalWrite(FAN2, HIGH);
  server.send(200, "text/plain", "Fan turned off");
  Serial.println("fan Off");
}

void handleUSonicOn() {
  prevUSonicState = uSonicState;
  uSonicState = LOW;
  digitalWrite(USONIC, LOW);
  server.send(200, "text/plain", "Ultrasonic humidifier turned on");
  Serial.println("usonic On");
}

void handleUSonicOff() {
  prevUSonicState = uSonicState;
  uSonicState = HIGH;
  digitalWrite(USONIC, HIGH);
  server.send(200, "text/plain", "Ultrasonic humidifier turned off");
  Serial.println("usonic Off");
}

void handleLampOn() {
  prevLampState = lampState;
  lampState = LOW;
  digitalWrite(LAMP, LOW);
  server.send(200, "text/plain", "Lamp turned on");
  
}

void handleLampOff() {
  prevLampState = lampState;
  lampState = LOW;
  digitalWrite(LAMP, HIGH);
  server.send(200, "text/plain", "Lamp turned off");
}

void sendModuleState(String moduleState) {
  // Create an HTTPClient object
  HTTPClient http;

  // Specify request destination
  http.begin(client, "http://175.205.128.9:9797/postModuleState.php");

  // Specify content-type header
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");

  // Prepare POST data
  String httpRequestData = "state=" + moduleState;

  // Send HTTP POST request
  int httpResponseCode = http.POST(httpRequestData);

  // Print HTTP response code
  Serial.print("sendmodulestate HTTP Response code: ");
  Serial.println(httpResponseCode);

  // End the connection
  http.end();
}


void setup() {

  Serial.begin(9600);  //Init serial port

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("connectin...");
    Serial.println(WiFi.status());
  }
  Serial.println("CONNECTED");
  Serial.println(WiFi.localIP());

  server.on("/manual", handleManual);
  server.on("/auto", handleAuto);

  server.on("/fan_on", handleFanOn);
  server.on("/fan_off", handleFanOff);
  server.on("/usonic_on", handleUSonicOn);
  server.on("/usonic_off", handleUSonicOff);
  server.on("/lamp_on", handleLampOn);
  server.on("/lamp_off", handleLampOff);

  server.on("/minHumid", HTTP_POST, [] {
  if (server.hasArg("plain")) {
    minHumid = server.arg("plain").toInt();
    server.send(200, "text/plain", "OK");
    Serial.print(minHumid);
    Serial.println(" set minHumid");
  } else {
    server.send(500, "text/plain", "Body not received");
  }
});

server.on("/maxHumid", HTTP_POST, [] 
{
  if (server.hasArg("plain")) 
  {
    maxHumid = server.arg("plain").toInt();
    server.send(200, "text/plain", "OK");
    Serial.print(maxHumid);
    Serial.println(" set maxHumid");
  } 
  else 
  {
    server.send(500, "text/plain", "Body not received");
  }
});

  server.on("/humidRange", []
  {
    String response = "minHumid=" + String(minHumid) + "&maxHumid=" + String(maxHumid);
    server.send(200, "text/plain", response.c_str());
  });
  server.begin();
  
  MQ135.setRegressionMethod(1);  //_PPM =  a*ratio^b
  dht.begin();

  //제어 모듈
  pinMode(FAN1, OUTPUT);
  pinMode(FAN2, OUTPUT);
  pinMode(USONIC, OUTPUT);
  pinMode(LAMP, OUTPUT);

  MQ135.init();

  Serial.print("Calibrating please wait.");
  float calcR0 = 0;
  for (int i = 1; i <= 10; i++) 
  {
    MQ135.update();  // Update data, the arduino will read the voltage from the analog pin
    calcR0 += MQ135.calibrate(RatioMQ135CleanAir);
    Serial.print(".");
  }
  MQ135.setR0(calcR0 / 10);
  Serial.println("  done!.");

  if (isinf(calcR0)) 
  {
    Serial.println("Warning: Conection issue, R0 is infinite (Open circuit detected) please check your wiring and supply");
    while (1);
  }
  if (calcR0 == 0) 
  {
    Serial.println("Warning: Conection issue found, R0 is zero (Analog pin shorts to ground) please check your wiring and supply");
    while (1);
  }

  //led off로 설정해 놓기
  digitalWrite(LAMP, HIGH);

}


void loop() {

  server.handleClient();

  MQ135.update();  // Update data, the arduino will read the voltage from the analog pin

  MQ135.setA(110.47);
  MQ135.setB(-2.862);              // Configure the equation to calculate CO2 concentration value
  float CO2 = MQ135.readSensor();  // 이산화탄소

  MQ135.setA(102.2);
  MQ135.setB(-2.473);              // Configure the equation to calculate NH4 concentration value
  float NH4 = MQ135.readSensor();  // 암모늄

  float h = dht.readHumidity();     //습도
  float t = dht.readTemperature();  //온도
  float f = dht.readTemperature(true);
  // Check if any reads failed and exit early (to try again).

  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  if (manual == false)
{
    if (h >= maxHumid)  // 습도가 maxHumid% 이상일 때
    {
        digitalWrite(FAN1, LOW);  // 팬 ON
        digitalWrite(FAN2, LOW);  // 팬 ON
        digitalWrite(USONIC, HIGH);  // 가습기 OFF
    }
    else if (h <= minHumid)  // 습도가 minHumid% 이하일 때
    {
        digitalWrite(FAN1, HIGH);  // 팬 OFF
        digitalWrite(FAN2, HIGH);  // 팬 OFF
        digitalWrite(USONIC, LOW);  // 가습기 ON

    }
    else  // 습도가 minHumid% 초과, maxHumid% 미만일 때
    {
        digitalWrite(FAN1, HIGH);  // 팬 OFF
        digitalWrite(FAN2, HIGH);  // 팬 OFF
        digitalWrite(USONIC, HIGH);  // 가습기 OFF
    }
}


 if (digitalRead(FAN1) != prevFanState) {
    fanState = digitalRead(FAN1);
    if (fanState == LOW) sendModuleState("fan:on");
    else sendModuleState("fan:off");
    prevFanState = fanState;
    
  }

  if (digitalRead(USONIC) != prevUSonicState) {
    uSonicState = digitalRead(USONIC);
    if (uSonicState == LOW) sendModuleState("uSonic:on");
    else sendModuleState("uSonic:off");
    prevUSonicState = uSonicState;
    
  }

    if (digitalRead(LAMP) != prevLampState) {
    lampState = digitalRead(LAMP);
    if (lampState == LOW) sendModuleState("lamp:on");
    else sendModuleState("lamp:off");
    prevLampState = lampState;
    
  }

  String httpRequestData = "Temperature=" + String(t) + "&Humidity=" + String(h) + "&Ammonium=" + String(NH4) + "&CO2=" + String(CO2);
  http.begin(client, String(host) + "/postSensorDataBackUp.php");
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");
  int httpResponseCode = http.POST(httpRequestData);
   if (httpResponseCode > 0) 
   {
    String response = http.getString();
    Serial.println(httpResponseCode);
    Serial.println(response);
    } 
    else 
    {
    Serial.print("Error on sending POST: ");
    Serial.println(httpResponseCode);
    }

  http.end();
  Serial.print(t);
  Serial.print(",");
  Serial.print(h);
  Serial.print(",");
  Serial.print(NH4);
  Serial.print(",");
  Serial.print(CO2);
  Serial.println("");
  if (manual == false) Serial.println("AUTOMODE");
  else if (manual == true) Serial.println("MANUALMODE");


  delay(2000);  //Sampling frequency
}


