// First.cpp : Defines the entry point for the console application.
#include<iostream>
#include<fstream>
using namespace std;

class Swap
{
public:
template<class T>
void swap(T& a,T& b)
	{
		T temp;
		temp=a;
		a= b;
		b=temp;

	}
int main()
{
	cout<<"\n Swapping program"<<endl;
	int i=20;
	int j=40;

	Swap s;
	s.swap(i,j);
	cout<<"\n I="<<i;
	cout<<"\n J="<<j;


	return 0;
}
