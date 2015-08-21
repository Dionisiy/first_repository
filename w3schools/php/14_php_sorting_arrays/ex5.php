
 <!DOCTYPE html>
 <html>
 <body>

 <?php

 $age = array("Peter" =>"35", "Ben"=>"35", "Joe"=>"43");
 asort($age);
 foreach($age as $x => $x_value){

     echo "Key =". $x.", Value = ". $x_value;
 }

 ?>

 </body>
 </html>