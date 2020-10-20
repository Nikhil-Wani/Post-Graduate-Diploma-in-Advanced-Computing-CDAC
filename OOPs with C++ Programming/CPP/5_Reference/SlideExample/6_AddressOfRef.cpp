#include<iostream>
using namespace std;
int main(){
int a = 10;  //Lets us assume address of a is 8080
int &r = a; // Lets us assume address of r is 9090
cout<<"\n"<<&a; // Will print 8080
cout<<"\n"<<&r; // Will print 8080
return 0;
}
