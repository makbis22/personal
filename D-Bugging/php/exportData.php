<?php
    // DB connection
    $dbHost = "localhost";
    $dbUser = "root";
    $dbPass = "";
    $dbName = "testv1";

    $conn = mysqli_connect($dbHost, $dbUser, $dbPass, $dbName);

    // Check connection
    if (!$conn) {
        die("Connection failed: " . mysqli_connect_error());
    }

    // Array of table names
    $tables = array("caterpillar", "controllog", "sensordata");

    foreach($tables as $table) {
        // Query
        $sql = "SELECT * FROM $table";
$result = mysqli_query($conn, $sql);

if ($result === false) {
    // Handle error - print mysqli error
    echo mysqli_error($conn);
} else {
    // Proceed with fetching data
    $fp = fopen("$table.csv", 'w');

    // Fetch rows and write to file
    while($row = mysqli_fetch_assoc($result)) {
        fputcsv($fp, $row);
    }

    // Close the file
    fclose($fp);
}
    }

    // Close the connection
    mysqli_close($conn);
?>
