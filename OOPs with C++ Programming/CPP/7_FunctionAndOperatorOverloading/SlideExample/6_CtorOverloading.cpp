#include<iostream>
using namespace std;
class Complex{
 private:
 int i,j;
public:
Complex():i(0),j(0){
	cout<<"\n 0args Ctor";
}
Complex(int p):i(p),j(p){
	cout<<"\n 1args Ctor";
}
Complex(int p,int k){
 i=p; j=k;
 cout<<"\n 2args Ctor";
}};
int main(){
Complex c1;
Complex c2(5);
Complex c3(10,20);
 return 0;
}
