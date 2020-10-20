#include<iostream>
using namespace std;
int main(){
int a=10;
int &r =a;
r = r+1;
cout<<"\n"<<r<<" "<<a;// will print 11 11
return 0;
}
