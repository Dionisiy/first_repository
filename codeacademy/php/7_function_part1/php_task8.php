<!doctype html>
<html>
<body>
<?php

$lottery = array();

array_push($lottery,"Alina");
array_push($lottery,"Roman");
array_push($lottery,"Irina");
array_push($lottery,"Denys");
array_push($lottery,"Alesha");
array_push($lottery,"Valentin");
array_push($lottery,"Daniel");
array_push($lottery,"Sergei");

sort($lottery);

$win = rand(0,count($lottery)-1);

print strtoupper($lottery[$win]);

?>
</body>
</html>