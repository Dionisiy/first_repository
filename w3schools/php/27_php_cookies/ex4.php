<!DOCTYPE html>
<?php

    setcookie("test_cookie", "test", time()+3600, '/');
?>
<html>
<head>
    <style>
        .imag{
            position: fixed;

        }
    </style>
</head>
<body >

<?php
    if(count($_COOKIE)>0){
        echo "Cookie are enable";
    }else{
        echo "Cookie are disable";
    }
?>


</body>
</html>
