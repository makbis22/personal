<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "testv1";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "SELECT `temperature`,`Humidity`,`Ammonium`,`CO2`, `timestamp`
FROM `sensordata`
ORDER BY `timestamp` DESC
LIMIT 100;
";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    // 여러 행을 저장할 빈 배열을 생성합니다.
    $rows = array();

    // 결과 셋의 모든 행을 반복합니다.
    while($row = $result->fetch_assoc()) {
        // 각 행을 배열에 추가합니다.
        $rows[] = $row;
    }

    // 모든 행을 JSON으로 인코드하여 출력합니다.
    echo json_encode($rows);
} else {
    echo "0 results";
}
$conn->close();
?>
