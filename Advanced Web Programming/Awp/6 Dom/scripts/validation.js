
var count=34;
count++;


function ValidateSelection()  
{  

    count++;

    var checkboxes = document.getElementsByName("school");  
    var numberOfCheckedItems = 0;  
    for(var i = 0; i < checkboxes.length; i++)  
    {  
        if(checkboxes[i].checked)  
            numberOfCheckedItems++;  
    }  
    if(numberOfCheckedItems > 2)  
    {  
        alert("You can't select more than two favorite schools!");  
        return false;  
    }  
}  


var account=function()
{

  //private variable
 var balance=5000;
 

 //member function

 var getBalance=function(){
     console.log(balance);
 }

 var withdraw =function(amount){

    balance-=amount;
 };

 //published function outside

 return{
    GetBalance:getBalance,
    Withdraw:withdraw
 }
};

console.log("Hello..." + count);

var acct= new account();
var amount=acct.GetBalance();
acct.Withdraw(500);


console.log(amount);


