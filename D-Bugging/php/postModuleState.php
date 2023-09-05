<?php
  $stateString = $_POST["state"];
 

  // Split the stateString into modulename and modulestatus
  list($modulename, $modulestatus) = explode(":", $stateString);

  // Database credentials
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

  // SQL query to insert the module state and timestamp
  $sql = "INSERT INTO controllog (modulename, modulestatus, timestamp) VALUES ('$modulename', '$modulestatus', NOW())";

  if ($conn->query($sql) === TRUE) {
    echo "New record created successfully";
  } else {
    echo "Error: " . $sql . "<br>" . $conn->error;
  }

  $conn->close();
?>
