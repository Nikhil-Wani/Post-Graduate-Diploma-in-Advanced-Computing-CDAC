exports.search = function(str){
var a=["qwerty","aaabbbbb","process"];
for(var i = 0; i<a.length;i++)
		{
			if(a[i]==str)
			return "found";
	}
return "not found";
};