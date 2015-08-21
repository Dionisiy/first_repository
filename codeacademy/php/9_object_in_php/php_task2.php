<!doctype html>
<html>
    <head>
        <title> Introduction to Object-Oriented Programming</title>
        <link type="text/css" rel="stylesheet" href="style.css"/>
    </head>
        <body>
        <p>
            <?php

            class Person
            {

                public $isAlive = true;
                public $firstName;
                public $lastName;
                public $age;

                public function __construct($firstName, $lastName, $age)
                {
                    $this->firstname = $firstName;
                    $this->lastname = $lastName;
                    $this->age = $age;
                }

                public function greet()
                {
                    return "Hello, my name is " . $this->firstname . " " . $this->lastname . ". Nice to meet you! :-)";
            }
            }
                $me= new Person("denys","12","12");
            echo $me->greet();
            ?>
        </p>
        </body>
</html>