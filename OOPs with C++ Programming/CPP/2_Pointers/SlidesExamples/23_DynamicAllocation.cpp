#include<iostream>
using namespace std;
int main(){
int *p = new int;
*p = 10; 
cout<<*p;
delete p;
return 0;
} // Dynamically allocated memory has no variable name
