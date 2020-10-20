#include<iostream>
using namespace std;	
class Complex{
	private: int i,j;
	public:
	Complex():i(0),j(0) {}
	void Accept() {
		cout<<“\n enter real & img part”;
		cin>>i>>j; 
 	}
	void Display() const
	{ 	cout<<i<<j;
	} 
};
int main(){
	const Complex c1;
	c1.Accept(); // Error as obj is const
	c1.Display();
return 0;}

