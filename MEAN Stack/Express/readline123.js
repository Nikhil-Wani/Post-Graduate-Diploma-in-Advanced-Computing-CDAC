readline=require('readline');
fs=require('fs');


let rl=readline.createInterface({
     input:fs.createReadStream("sample.txt")
});

let ln=0;

rl.on('line',function(line){
   ln++;
   console.log(ln+"-->"+line);
});

rl.on("close",function(){
    console.log("lines : "+ln);
   
});