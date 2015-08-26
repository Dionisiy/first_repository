
$(document).ready(function() {


    $("#button").click(function(){
        var $dat = $('input[name=checkListItem]').val();
    $(".list").append("<div class='team'>" +$dat+"</div>")
  //$(".list").append("<div class="team"> text</div>");
    });
    $(document).on('click', '.team', function(){

            $(this).remove();
    });
     });
