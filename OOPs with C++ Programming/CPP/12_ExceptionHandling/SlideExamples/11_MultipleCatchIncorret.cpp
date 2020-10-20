#include<iostream>
#include<stdexcept>
using namespace std;
float Divide(int a, int b){
float ans;
	if(b ==0){
		throw runtime_error("Divide by Zero Error");
	}
	else{
		ans =a/b; 
	}
}
int main(){
try{ 
float avg = Divide(10,0);
cout<<"Average="<<avg;
}
catch(exception e){
cout<<e.what();
}
catch(runtime_error e){
cout<<e.what();
}
return 0;
}

