#include<string>
#include<iostream>
using namespace std;

/*class  Parent
{

public:
virtual	void Function()
	{
		cout<<"\n Parent Class Function.";
	}
};

class  Child: public Parent
{

public:
	void Function()
	{
		cout<<"\n Child Class Function.";
	}

	void Function1()
	{
		cout<<"\n Child Class Function.";
	}
};

*/
void  func(int **p)
{
	int i=20;
	*p = &i;
}
int main(int argc, char* argv[])
{

	int *q =NULL;
	func(&q);
	printf(" \n%d \n",*q);


	/*Parent *ptrParent = NULL;
	Child objChild;
	ptrParent = &objChild;
	ptrParent->Function1();
	*/

	/*const int s= 10;
	cout<<"\n"<< s;
	int * p = NULL;	
	p =(int *)&s;
	cout<<","<<*p;
	*p = 100;
	cout<<","<<*p;
	cout<<","<< s;*/
	

/*	char *s = new char[10];
	for(int i=0;i<10;i++)
	{
		s[i] = i;
	}

	for(int j=0;j<10;j++)
	{
		printf(" Value of s[%d] = %d \n",j,s[j]);
	}

	string strName;
	cout<<"\nEnter Name: ";
	cin>>strName;
	cout<<"\nName="<<strName<<"\n";*/
	return 0;
}

