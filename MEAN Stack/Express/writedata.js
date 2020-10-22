fs=require('fs');
path=__dirname+"/sample1.txt";
fs.stat("sample.txt",function(err,status){
   if(err){
      console.log("error");
   }
   else{
      fs.open(path,"w",function(err,fd){
		  if(err){
			  console.log("error"); 
		  }
		  else{
		      data="this is data written in file";
			  buff=new Buffer(data);
			  fs.write(fd,buff,0,buff.length,null,function(err,bytewrite,buff){
				  console.log(buff.toString()+"wrote in th file");
				  
			  });
		  }
		  
	  })
   }

})
