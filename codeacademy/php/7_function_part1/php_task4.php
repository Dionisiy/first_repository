<!doctype html>
<html>
<body>
    <?php
$round = round(M_PI);
print $round;  // prints 3
    echo "<br>";

// This time, round pi to 4 places
$round_decimal = round(M_PI, 4);
print $round_decimal; // prints 3.1416
        echo"<br>";
        $var = 12.345;
        print round($var);
        echo"<br>";
        print round($var,3);
    ?>
</body>
</html>