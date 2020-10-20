#include<iostream>
using namespace std;
class Sample{
private : int id;
public:
Sample(int n): id(n){
cout<<"\n Object with id="<<id<<" Initialized";
}
~Sample(){
cout<<"\n Object with id="<<id<<" Destroyed";
}};

int main(){
 Sample s1(1);
 {
 Sample s2(2);
 } //s2 gets destroyed here
 cout<<"\n s1 is alive";
return 0;
} // s1 gets destroyed here
