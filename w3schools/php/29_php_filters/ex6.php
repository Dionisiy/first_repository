
<!DOCTYPE html>
<html>
<body>
    <?php
    $url = "http://www.w3schools.com";
    $url =filter_var($url,FILTER_VALIDATE_URL);
    if(!filter_var($url,FILTER_VALIDATE_URL)===false){

        echo ("$url is a valid URL");
    }else{
        echo ("$url is not a valid URL");
    }
    ?>
</body>
</html>
