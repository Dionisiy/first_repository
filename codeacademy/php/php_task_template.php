    <html>
    <body>


    <?php
class Test
{
    static public function getNew()
    {
        return new static;
    }
}

class Child extends Test
{}

$obj1 = new Test();
$obj2 = new $obj1;
    echo var_dump($obj2);
/*echo var_dump($obj1 !== $obj2);
*/
/*$obj3 = Test::getNew();
var_dump($obj3 instanceof Test);

$obj4 = Child::getNew();
echo var_dump($obj4 instanceof Child);*/
?>

    </body>
    </html>