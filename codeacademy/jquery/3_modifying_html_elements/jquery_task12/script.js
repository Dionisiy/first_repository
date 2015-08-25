$(document).ready(function(){
    $("#button").click(function(){
       var $toAdd = $("input[checkListItem]").val();
        $("div.list").append($('<div class="item">'+ toAdd +'</div>'));
    });
});