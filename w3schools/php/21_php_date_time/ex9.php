<!DOCTYPE HTML>
<html>
<head>

</head>
<body>


<?php
    $d1=strtotime("December 31");
    $d2 =ceil(($d1-time())/60/60/24);
    echo "There are".$d2. " days to 31 of December";
?>
</body>
</html>






