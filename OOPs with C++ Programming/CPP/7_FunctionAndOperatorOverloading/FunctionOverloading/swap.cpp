#include<iostream>
using namespace std;
class Swapper
{
 public:
	void swap(int& a,int& b)
	{
		int temp;
		temp=a;
		a= b;
		b=temp;
	}
	void swap(float& a,float& b)
	{
		float temp;
		temp=a;
		a= b;
		b=temp;

	}

};
int main()
{
	cout<<"\n Swapping program"<<endl;
	int a=20;
	int b=40;
	Swapper s;
	s.swap(a,b);
	cout<<"\n I="<<a;
	cout<<"\n J="<<b;

    float p=20.30f;
	float q=30.20f;
	s.swap(p,q);
	cout<<"\n p="<<p;
	cout<<"\n q="<<q;

	return 0;
}
