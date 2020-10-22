express=require('express');
app=express();

logger=function(req,resp,next){
  console.log("in logger module"+req.url+"---"+req.method);
  next();
}
authenticate=function(req,resp,next){
    console.log("in logger module"+req.url+"---"+req.method);
    console.log("in authenticate middleware");
	next();

}
app.use(logger);
app.use(authenticate);
app.get("/",function(req,resp){
	resp.send("<h1>Hello world</h1>");
	
});
app.get("/home",function(req,resp){
	resp.send("<h1>In home</h1>");
});

app.listen(3000);
console.log("server running at port 3000");