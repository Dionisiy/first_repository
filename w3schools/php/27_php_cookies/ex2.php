<!DOCTYPE html>
<?php
    $cookie_name= "user";
    $cookie_value = "Alex Porter";
    setcookie($cookie_name,$cookie_value,time()+(86400*30),"/");//86400 = 1day
?>
<html>
<body>

<?php
    if(!isset($_COOKIE[$cookie_name])){
        echo "Cookie named '" .$cookie_name. "' is not set";
    }else{
        echo "Cookie ' ".$cookie_name." '  is set!<br>";
        echo "Value is:".$_COOKIE[$cookie_name];
    }
?>

</body>
<p> <storng>NOTE:</storng> You  might have to reloaded the page to see the value of the cookie.</p>
</html>