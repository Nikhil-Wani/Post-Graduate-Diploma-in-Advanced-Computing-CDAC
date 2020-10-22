class Student  
{  
    RollNo: number;  
    Name: string;   

    constructor(RollNo: number, Name: string)   
    {  
        this.RollNo = RollNo;  
        this.Name = Name;  
    }  
    showDetails()  
    {  
        console.log(this.RollNo + " : " + this.Name);  
    }  
} 
var obj = new Student(10,"nikhil")
obj.showDetails()