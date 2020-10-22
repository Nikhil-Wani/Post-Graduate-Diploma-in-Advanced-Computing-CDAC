interface Calc {  
    subtract (first: number, second: number): any;  
}  
   
let Calculator: Calc = {  
    subtract(first: number, second: number) {  
        return first - second;  
    }  
}  

console.log(Calculator.subtract(10,5))
