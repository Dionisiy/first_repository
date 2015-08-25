$(document).ready(function() {

    $("div").mouseenter(function(){

        $("div").fadeTo(2000, 1);
    });

    $("div").mouseout(function(){

        $("div").fadeTo(1500, 0.2);
    });


});
