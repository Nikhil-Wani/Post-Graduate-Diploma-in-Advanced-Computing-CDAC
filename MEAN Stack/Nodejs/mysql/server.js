const mysql = require('mysql');
const express = require('express');
const bodyParser =require('body-parser');

var app = express();
app.use(bodyParser.json());

var mysqlConnection = mysql.createConnection({
    host: "localhost",
    user: "root",
    password: "root@123",
    database: "new_schema",
    multipleStatements: true
});

mysqlConnection.connect((err) =>{
    if(!err)
    {
        console.log("connected");
    }
    else
    {
        console.log("connection failed");
    }
})
app.listen(3000);