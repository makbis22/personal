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

// Assuming that the 'name' parameter is sent via a GET request
$name = mysqli_real_escape_string($conn, $_GET['name']);

$sql = "SELECT bmi FROM users WHERE name = '$name'";

$result = $conn->query($sql);

$data = array();

if ($result->num_rows > 0) {
    // Output data of each row
    while($row = $result->fetch_assoc()) {
        $data[] = $row;
    }
} else {
    echo "No results";
}

// Modify the PHP code to return a JSON array
echo json_encode($data);


$conn->close();
?>
