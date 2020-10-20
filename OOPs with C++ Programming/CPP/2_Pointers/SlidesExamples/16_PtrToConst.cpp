#include<iostream>
using namespace std;
int main(){
const int k=20;
const int *p = &k;
cout<<*p;
p = NULL; // can be changed
p = p+1; // can be changed
//*p =100; // Error
return 0;}
