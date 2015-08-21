<html>
<head>
    <title>Accessing Associative Arrays</title>
</head>
<body>
<p>
   <?php
        $fruits = array(
            'red' => "strawwberry",
            'green'=> "apple",
            'yellow'=> " banana",

        );
        foreach($fruits as $key=>$value){

            echo "The ".$value." is ".$key;
            echo"<br>";
        }

   ?>
</p>
</body>
</html>