<!doctype html>
<html>
    <head>
        <title> Override!</title>
        <link type="text/css" rel="stylesheet" href="style.css"/>
    </head>
        <body>
        <p>

            <?php
            class Person {
                const stealth = "MAXIMUM";
            }
            class Ninja extends Person{
                const steal = "MAXIMUM";
            }
                echo Person::stealth;
            ?>

        </p>
        </body>
</html>