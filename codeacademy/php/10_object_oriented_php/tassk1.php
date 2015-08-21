<html>
<body>
<?php
class Person{


public  function __construct(){
    echo "Мы в конструкторе";
}
}
echo"Start <br>";
    $var = new Person();
echo"var created<br>";
   // echo $var->__construct();
    echo"<br>";
    $var1 = new Person();
echo"var1 created<br>";
$c = 2;
?>
</body>
</html>