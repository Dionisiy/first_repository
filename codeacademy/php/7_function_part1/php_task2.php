<html>
<p>
    <?php
    // Get a partial string from within your own name
    // and print it to the screen!
    $name ="Alexander";
    $part = substr($name,1,4);
    echo $part;
    ?>
</p>
<p>
    <?php
    // Make your name upper case and print it to the screen:
    $uppercase = strtoupper($part);
    echo $uppercase;
    ?>
</p>
<p>
    <?php
    // Make your name lower case and print it to the screen:
    $uppercase = strtolower($uppercase);
    echo $uppercase;
    ?>
</p>
</html>