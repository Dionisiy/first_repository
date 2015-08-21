 <!DOCTYPE html>
<html>
<body>
<form method="get" action="check_request.php" autocomplete="off">

     First Name:<input type ="text" name="firstName">
    <br>
    <input type="submit">

</form>
<?php

    if($_SERVER['REQUEST_MEHTOD']=="POST"){
        //
        $name =$_POST['name'];
        if(empty($name)){
            echo "Name is empty";
        }else{
            echo $name;
        }
    }


?>

</body>
</html>