<!doctype html>
<html>
    <head>
        <title> Override!</title>
        <link type="text/css" rel="stylesheet" href="style.css"/>
    </head>
        <body>
        <p>

            <?php
            class King{
                public static function proclaim(){
                    echo "A kingly proclamation";
                }
            }
            King::proclaim();
            ?>

        </p>
        </body>
</html>