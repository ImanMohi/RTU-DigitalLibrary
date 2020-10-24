
// Program to print Table ------- By Function expression -----------
var num = 2;
var table = function Table(){

    for(var i = 1; i <= 10; i++){
        var result = num * i;
       console.log(result);
    }
}

table();

// ------------------- Anonymous Function ------------

 var num;
var table = function (num){
    for(var i = 1; i <= 10; i++){
        var result = num * i;
       console.log(result);
    }
}

table(3);

// ------------------- Arrow Function ------------

var num;
var table = (num) =>{for(var i = 1; i <= 10; i++){console.log(num * i) }}
table(4);


