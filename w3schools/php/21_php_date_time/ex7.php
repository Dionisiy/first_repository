<!DOCTYPE HTML>
<html>
<head>

</head>
<body>


<?php
    $d=strtotime("tomorrow");
    echo date("Y-m-d h:i:sa",$d)."<br>";
    $d=strtotime("next Saturday");
    echo date("Y-m-d h:i:sa",$d)."<br>";
    $d=strtotime("+5 Years");
    echo date("Y-m-d h:i:sa",$d)."<br>";
?>
</body>
</html>






