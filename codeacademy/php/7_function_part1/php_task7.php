<!doctype html>
<html>
<body>
    <?php
        $the_array = array(1,2,3,5,4,12);
        sort($the_array);
    print join(",",$the_array);
    echo "<br>";
        rsort($the_array);
        print join("::",$the_array);

    ?>
</body>
</html>