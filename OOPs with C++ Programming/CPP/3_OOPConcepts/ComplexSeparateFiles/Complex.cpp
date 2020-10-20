#include"Complex.h"

Complex::Complex(int i,int p=0)
{
	this->i=i;
	j=p;
	Count++;
}

void Complex::Accept()
{
	cout<<"\n Enter I:"<<endl;
	cin>>i;

	cout<<"\n Enter J:"<<endl;
	cin>>j;
}
void Complex::Display()const
{

	cout<<"\n"<< i<<"+"<< "j"<<j<<endl; 
	
}

int Complex:: GetValueI()const
{
 return i;
}

void Complex::SetValueI(int k)
{
	i=k;
}


int Complex:: GetCount()
{
	return Count;
}
int Complex::Count=0;

Complex Complex::Add(const Complex& comp)
{

return Complex(i+comp.i,j+comp.j);
}
