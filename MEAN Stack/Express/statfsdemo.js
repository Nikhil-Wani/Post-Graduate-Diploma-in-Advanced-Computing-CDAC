fs=require('fs');
fs.stat("sample.txt",function(err,status){
   if(err){
      console.log("error");
   }
   else{
      fs.open("sample.txt","r",function(err,fd){
		  if(err){
			  console.log("error"); 
		  }
		  else{
			  buff=new Buffer(status.size);
			  fs.read(fd,buff,0,status.size,null,function(err,byteread,buff){
				  console.log(buff.toString());
			  });
		  }
		  
	  })
   }

})