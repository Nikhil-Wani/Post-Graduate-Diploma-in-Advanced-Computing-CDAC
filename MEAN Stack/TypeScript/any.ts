function ProcessData(x: any, y: any) 
{  
    return x + y;  
}  
let result: any;  
result = ProcessData("Hello ", "Any!"); //Hello Any!  
result = ProcessData(2, 3); //5  