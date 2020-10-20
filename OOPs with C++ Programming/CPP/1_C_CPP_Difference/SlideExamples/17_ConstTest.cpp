#include<iostream>
using namespace std;
int main(){
const int k=10;
int* p =(int*)&k;
*p=100;
cout<<*p<<endl; // will print 100
cout<<k<<endl; // will print 10
return 0;
}
