#include<iostream>
using namespace std;

void fun(int** p)
{
*p= new int;
**p=20;
}

int main()
{

	int *p;
	fun(&p);
	cout<<"\n value="<<*p;
	delete p;
	return 0;
}
