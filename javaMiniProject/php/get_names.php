<?php

header('Content-Type: application/json');

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "test0601";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "SELECT DISTINCT name FROM users";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    $names = array();
    while($row = $result->fetch_assoc()) {
        array_push($names, $row["name"]);
    }
    echo json_encode($names);
} else {
    echo json_encode(array());
}

$conn->close();

?>
