#include<iostream>
using namespace std;
int main(){
int k=20;
int * const p = &k;
cout<<*p<<endl;
//p = NULL;// can  not be changed
//p = p+1; // can  not be changed
*p =100; // Can be changed	 
cout<<*p<<endl;
return 0;
} // Red colour indicate error
