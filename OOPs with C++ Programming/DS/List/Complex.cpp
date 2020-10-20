#include"Complex.h"

Complex::Complex():i(0),j(0)
{
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
