<!doctype html>
<html>
    <head>
        <title> Introduction to Object-Oriented Programming</title>
        <link type="text/css" rel="stylesheet" href="style.css"/>
    </head>
        <body>
        <p>
            <?php

            class Shape {
                public $hasSides = true;
            }
            class Square extends Shape{
              public $round=true;
            }
            $square = new Square();

            $circle = new Shape();
            if(property_exists($circle,"round")){
                echo "yes";
                echo"<br>";
            }
            if(property_exists($square,"hasSides")){
                echo "I have sides";
            }
            ?>
        </p>
        </body>
</html>