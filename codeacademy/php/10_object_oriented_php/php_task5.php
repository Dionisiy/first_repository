<!doctype html>
<html>
    <head>
        <title> Override!</title>
        <link type="text/css" rel="stylesheet" href="style.css"/>
    </head>
        <body>
        <p>
            <?php

                class Vehicle{
                 final public function honk(){
                        return "HONK HONK!";
                    }
                }
                class Bicycle extends Vehicle{
                    public function honk(){
                        return "Beep Beep!";
                    }
                }
                $bicycle = new Bicycle();
            echo $bicycle->honk();

            ?>
        </p>
        </body>
</html>