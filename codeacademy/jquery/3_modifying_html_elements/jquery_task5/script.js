
$(document).ready(function(){
   $("#one").after("<p>Paragraph</p>");
   var $paragraph = $("p");
   $("#two").after($paragraph);
   $("p").remove();
});
