<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "testv1";
$port = "3308";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname, $port);

// Check connection
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}

$data = array();

$modules = array('fan', 'usonic', 'lamp');

foreach ($modules as $module) {
  // Query to get module status from controllog
  $sql = "SELECT modulestatus FROM controllog WHERE modulename='$module' ORDER BY timestamp DESC LIMIT 1";
  $result = $conn->query($sql);
  if ($result->num_rows > 0) {
    // output data of each row
    while($row = $result->fetch_assoc()) {
      $data[$module] = $row["modulestatus"];
    }
  }
}


echo json_encode($data);

$conn->close();
?>
