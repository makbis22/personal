<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "testv1";
$port = "3308";

$conn = new mysqli($servername, $username, $password, $dbname, $port);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$temperature = isset($_POST["Temperature"]) ? $_POST["Temperature"] : null;
$humidity = isset($_POST["Humidity"]) ? $_POST["Humidity"] : null;
$ammonium = isset($_POST["Ammonium"]) ? $_POST["Ammonium"] : null;
$co2 = isset($_POST["CO2"]) ? $_POST["CO2"] : null;
$fanonoff = isset($_POST["fanOnOff"]) ? $_POST["fanOnOff"] : null;
$usoniconoff = isset($_POST["usonicOnOff"]) ? $_POST["usonicOnOff"] : null;
$lamponoff = isset($_POST["lampOnOff"]) ? $_POST["lampOnOff"] : null;
$moduleName = isset($_POST["ModuleName"]) ? $_POST["ModuleName"] : null;

if ($temperature && $humidity && $ammonium && $co2) {
    $sql = "INSERT INTO sensordata (Timestamp, Temperature, Humidity, Ammonium, CO2) VALUES (NOW(), ?, ?, ?, ?)";
    
    if ($stmt = $conn->prepare($sql)) {
        $stmt->bind_param('dddd', $temperature, $humidity, $ammonium, $co2);
        
        if (!$stmt->execute()) {
            echo "Error: " . $sql . "<br>" . $conn->error;
        }
        
        $stmt->close();
    }
}

if ($moduleName && ($fanonoff || $usoniconoff || $lamponoff)) {
    $status = $fanonoff ?? $usoniconoff ?? $lamponoff;

    $sql = "INSERT INTO controllog (Timestamp, ModuleName, ModuleStatus) VALUES (NOW(), ?, ?)";
    
    if ($stmt = $conn->prepare($sql)) {
        $stmt->bind_param('ss', $moduleName, $status);
        
        if (!$stmt->execute()) {
            echo "Error: " . $sql . "<br>" . $conn->error;
        }
        
        $stmt->close();
    }
}

$conn->close();
?>
