<!DOCTYPE html>
<html>
<head>
    <title>Reconstructing the Person Class</title>
    <link type='text/css' rel='stylesheet' href='style.css'/>
</head>
<body>
<p>
    <?php
        class Cat{
            public $isAlive = true;
            public $numLegs = 4;
            public $name;

            public function  __construct($name){
                 $this->name = $name;
            }
            public function meow(){
                return "Meow meow ".$this->name;
            }
        }
            $cat = new Cat("Codecat");
            echo $cat->meow();

    ?>
</p>
</body>
</html>