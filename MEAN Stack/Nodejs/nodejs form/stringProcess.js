var fs = require('fs');
var http = require('http');
var url = require('url');
var query = require('querystring');
var m1 = require("./searchString");

function processRequest(req,res){
path=url.parse(req.url);

console.log(path);

res.writeHead(200,{"content-Type":"text/html"});
switch(path.pathname){

case "/": fs.readFile("form.html",function(err,data){
			res.write(data);
			res.end();
			});
			break;
			
case "/postdata": 
					var str="";
					req.on("data",function(data){
						str+=data;
					});
					
					req.on("end",function(){
						p=query.parse(str);
						s=m1.search(p.nm);
						res.write(p.nm);
						res.end(s);
					});
					
					
					
				break;
}

}

server=http.createServer(processRequest);

server.listen(3100);
console.log("server is running at port 3100");

