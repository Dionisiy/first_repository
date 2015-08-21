<!doctype html>
<html>
<body>
    <?php
    $name = rand(2,20);
    print $name;
    print "<br>";

    $nam ="alex";
    $length = strlen($nam);
    echo $length;
    echo "<br>";
    print substr($nam,(rand(0,$length-1)),1);
    echo"<br>";
    print substr("alex",rand(0,strlen("alex")-1),1);
    ?>
</body>
</html>