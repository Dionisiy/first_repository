<!DOCTYPE html>
<html>
<head>
    <title>Your own do-while</title>
    <link type='text/css' rel='stylesheet' href='style.css'/>
</head>
<body>
<?php
//write your do-while loop below
$cond = false;
do{
    $cond=rand(0,1);
    echo "condition is false";
    echo "<br>";
}
while($cond!=true);
?>
</body>
</html>