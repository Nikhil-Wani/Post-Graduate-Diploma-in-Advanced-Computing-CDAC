#include<iostream>
using namespace std;
class Complex{
 private:
 int i,j;
public:
Complex(int p =0, int k=0):i(p),j(k)
	{
	cout<<"\n Ctor called";
	} 
};
int main(){
Complex c1;
Complex c2(5);
Complex c3(10,20);
return 0;
}
