var MongoClient = require('mongodb').MongoClient;  
var url = "mongodb://localhost:27017/nikhil";

MongoClient.connect(url, function(err, db)    //here db is the client obj
{   
    if (err) throw err;
    var dbase = db.db("nikhil"); //here
    
    dbase.createCollection("customers", function(err, res) 
    {
        if (err) throw err;
        console.log("Collection created!");
        db.close();   //close method has also been moved to client obj
    });
});