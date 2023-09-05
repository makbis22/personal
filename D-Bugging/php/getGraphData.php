<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "testv1";
$port = "3308";
 // 포트 번호 추가

$conn = new mysqli($servername, $username, $password, $dbname, $port);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Prepare an SQL query to retrieve data from both tables
$sql = "SELECT 
    c.`timestamp`, 
    AVG(c.`activitylevel`) as `average_activitylevel`,
    s.`temperature`,
    s.`Humidity`,
    s.`Ammonium`,
    s.`CO2`
FROM `caterpillar` c
JOIN `sensordata` s ON c.`timestamp` = s.`timestamp`
GROUP BY c.`timestamp`
ORDER BY c.`timestamp` DESC
LIMIT 100";

$result = $conn->query($sql);

if ($result->num_rows > 0) {
    $data = array();

    // Process the result set
    while($row = $result->fetch_assoc()) {
        $data[] = $row;
    }

    // Output as JSON
    echo json_encode($data);
} else {
    echo "0 results";
}

$conn->close();
?>
