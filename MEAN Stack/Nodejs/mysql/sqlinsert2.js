var mysql = require('mysql');  
var con = mysql.createConnection(
{  
    host: "localhost",  
    user: "root",  
    password: "root@123",  
    database: "new_schema"  
});  

con.connect(function(err) 
{  
    if (err) throw err;  
    console.log("Connected!");

    var sql = "INSERT INTO employees (id, name, age, city) VALUES ?";  
    var values = [  
    ['2', 'Bharat Kumar', '25', 'Mumbai'],  
    ['3', 'John Cena', '35', 'Las Vegas'],  
    ['4', 'Ryan Cook', '15', 'CA']  
    ];  
    con.query(sql, [values], function (err, result) 
    {  
        if (err) throw err;  
        console.log("Number of records inserted: " + result.affectedRows);  
    });  
});  