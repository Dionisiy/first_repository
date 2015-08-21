<?php
    session_start();
?>
<!DOCTYPE html>
<html>
<body>
    <?php
    $_SESSION["favcolor"] ="yellow";

// remove all session variables
session_unset();
    print_r($_SESSION);
// destroy the session
//session_destroy();

//echo "All session variables are now removed, and the session is destroyed."

    ?>
</body>
</html>
