<!doctype html>
<html>
    <head>
        <title> Override!</title>
        <link type="text/css" rel="stylesheet" href="style.css"/>
    </head>
        <body>
        <p>

            <?php
            class Person{
                public static function say(){
                    echo "Here are my thougts!";
                }
            }
            class Blogger extends Person{
                const cats=50;
            }
            Blogger::say();
            echo"<br>";
            echo Blogger::cats;
            ?>

        </p>
        </body>
</html>