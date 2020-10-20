#include<iostream>
using namespace std;
int main(){
const int k=20;
const int *const p = &k;
cout<<*p<<endl;
//p = NULL;// Can  not be changed
//p = p+1; // Can  not be changed
//*p =100; // Can be changed	 
cout<<*p<<endl;
return 0;
} // Red colour indicate error
