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

// sensordata 테이블에서 가장 최근의 데이터를 선택
$sensordata_sql = "SELECT * FROM sensordata ORDER BY Timestamp DESC LIMIT 1";
$sensordata_result = $conn->query($sensordata_sql);

// caterpillar 테이블에서 가장 최근의 activitylevel 데이터를 선택
$caterpillar_sql = "SELECT `activitylevel` FROM `caterpillar` ORDER BY `timestamp` DESC LIMIT 100";
$caterpillar_result = $conn->query($caterpillar_sql);

if ($sensordata_result->num_rows > 0) {
    $row = $sensordata_result->fetch_assoc();
    
    // activitylevel 데이터를 모두 수집하여 평균 계산
    $activitylevels = array();
    while($caterpillar_row = $caterpillar_result->fetch_assoc()) {
        $activitylevels[] = $caterpillar_row['activitylevel'];
    }
    $average_activitylevel = array_sum($activitylevels) / count($activitylevels);

    // 평균 activitylevel을 결과에 추가
    $row['average_activitylevel'] = $average_activitylevel;
    
    echo json_encode($row);
} else {
    echo "0 results";
}

$conn->close();
?>
