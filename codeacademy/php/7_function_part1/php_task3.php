<!doctype html>
<html>
<body>
<p>
    <?php
    $name = "Serginio";
    $pos = strpos($name, "i");
    echo $pos;
    ?>
</p>
<p>
    <?php
     if(strpos($name,"d")===false){
        print "Sorry, wrong letter";
    }
    ?>
</p>
</body>
</html>