var MongoClient = require('mongodb').MongoClient;
var url = "mongodb://localhost:27017/nikhil";

MongoClient.connect(url, function(err, db)
{
  if (err) throw err;
  var dbo = db.db("nikhil");
  var myobj = { name: "Company Inc", address: "Highway 37" };
  dbo.collection("customers").insertOne(myobj, function(err, res)
    {
        if (err) throw err;
        console.log("1 document inserted");
        db.close();
    });
});