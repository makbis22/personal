<?php

header('Content-Type: application/json');

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "test0601";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Get the posted JSON data
$postdata = file_get_contents("php://input");
$request = json_decode($postdata);

$name = $request->name;
$height = $request->height;
$weight = $request->weight;
$bmi= $request->bmi;
$date = $request->date;

$sql = "INSERT INTO users (name, height, weight, bmi, date) VALUES ('$name', '$height', '$weight', '$bmi', '$date')";

if ($conn->query($sql) === TRUE) {
    echo json_encode(array("status" => true, "message" => "Data inserted successfully"));
} else {
    echo json_encode(array("status" => false, "message" => "Error: " . $sql . "<br>" . $conn->error));
}

$conn->close();

?>
