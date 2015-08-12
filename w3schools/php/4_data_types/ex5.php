 <!DOCTYPE html>
<html>
<body>

 <?php
 class Car  {
    function Car(){
      $this->model = "VW";
    }
 }
 //создадим объект
 $herbie =new Car();
 echo $herbie->model;

 ?>

</body>
</html>