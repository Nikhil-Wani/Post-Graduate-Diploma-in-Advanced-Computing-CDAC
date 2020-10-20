#include<iostream>
using namespace std;
int main()
	{
	int a =10;
	int *p =&a; 							
	//	Below is double  pointer			    
	int **dp=&p;
	cout<<p<<endl;
	cout<<*p<<endl; 
	cout<<**dp<<endl;
	return 0;
	}
