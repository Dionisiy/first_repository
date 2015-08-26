$(document).ready(function(){
    $(this).keydown(function(){
        $("img").animate({left:'+=20px'},500);
    });
});