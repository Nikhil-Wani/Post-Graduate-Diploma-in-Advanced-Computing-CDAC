#include<iostream>
using namespace std;
int k = 10;
int& function()
{ return k;}
int main(){
function()=100;
cout<<k; // Will print 100
return 0;}
