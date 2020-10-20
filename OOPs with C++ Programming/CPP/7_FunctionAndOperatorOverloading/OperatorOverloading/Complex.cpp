#include<iostream>
using namespace std;

class Complex
{

	int i;
	int j;

public:

	Complex():i(0),j(0)
	{
	}

	Complex(int r,int s):i(r),j(s)
	{
	}
	
	const Complex& operator=(const Complex& right)
	{
		// Handle self-assignment:
		if(this == &right) 
		return *this;
		i = right.i;
		j = right.j;
		return *this;
	}

	const Complex operator+( const Complex& right)const 
	{
		Complex x;
		x.i = i+ right.i;
		x.j = j + right.j;
		return x;


	//return Complex(i + right.i,j+right.j);
	}
	
	const Complex operator+(int real)const 
	{
		return Complex(i+real,j);
	}
	
	bool operator==(const Complex & right)const 
	{
		return (i==right.i && j== right.j);
	}
	
	bool operator!=(const Complex & right)const 
	{
		return !((*this)==right);

	}
	
	const Complex & operator++() 
	{
		++i;
		return *this;
	}
	Complex operator++(int) 
	{
		Complex a=*this;
		++i;
		return a;

	}
	friend ostream& operator<<(ostream& os, const Complex& c) ;
	friend istream& operator>>(istream& is, Complex& c);
};

ostream& operator<<(ostream& os, const Complex& c) 
	{
		return os << "Real: " << c.i <<" Imaginary"<<c.j<< endl;
	}

istream& operator>>(istream& is, Complex& c)
{
cout<<"\n Enter real and imaginary";
	is >> c.i;
	is >> c.j;
	return is;
}
const Complex operator+(int real , const Complex& right)
{
	return right+real;
}

int main()
{

	/*Complex c1(1,1),c2(2,2),c3;
	c1.Display();
	c2.Display();
	c3 = c1+ c2;
	c3.Display();
	c1= c3;
	c1.Display();
	cout<<c1;*/
	Complex c4;
	cin>>c4;
	cout<<c4;
return 0;
}
