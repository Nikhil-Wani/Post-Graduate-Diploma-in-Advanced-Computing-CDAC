var event=require('events');
eventEmitter=new event.EventEmitter;
myf1=function(d){
    console.log("data : "+d);
}
eventEmitter.on("myevent",myf1);

fn=function(){
  eventEmitter.emit("myevent","passed data");
}
fn()