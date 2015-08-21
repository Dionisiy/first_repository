<!DOCTYPE html>
<html>
<head>
    <title>Reconstructing the Person Class</title>
    <link type='text/css' rel='stylesheet' href='style.css'/>
</head>
<body>
<p>
    <!-- Your code here -->
    <?php
    class Person{
        public $isAlive = true;
        public $firstname;
        public $lastname;
        public $age;

        public function __construct($firstname,$lastname,$age){

            $this->firstname = $firstname;
            $this->lastname = $lastname;
            $this->age = $age;
        }
    }
    $teacher = new Person("Borya","Veselov",56);
    echo "$teacher->isAlive";
    $student = new Person("Jeko","Kuznecov",12);
    ?>
</p>
</body>
</html> 