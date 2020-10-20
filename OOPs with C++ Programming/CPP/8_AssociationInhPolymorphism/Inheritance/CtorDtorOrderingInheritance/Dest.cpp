#include<iostream>
using namespace std;

class Base
{
	public:
		Base()
		{
			cout<<"\n Base class ctor"<<endl;
		}
		virtual~Base()
		{
			cout<<"\n Base Class dtor"<<endl;
		}
};
class Derived :public Base
{
	int *p;

	public:
		Derived()
		{
		p= new int[10];	
		cout<<"\n Derived class ctor"<<endl;
		}
		~Derived()
		{
		cout<<"\n Derived Class dtor"<<endl;
		delete []p;	
		}
};

int main()
{
	 Base *bptr = new Derived; //upcasting
	 delete bptr;
	return 0;
}
