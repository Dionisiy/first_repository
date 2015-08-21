<html>
<head>
</head>
<body>
<p>
    <?php
        $items = 5;
        if($items > 5){
            echo "You get a 10% discount";
        }elseif($items<5){
            echo "You get a 5% discount";
        }else{
            echo "You are lucky";
        }
    ?>
</p>
</body>
</html>