#include<iostream>
using namespace std;
int k=100;
int* ChangeGlobal()
{
	return &k;
}

int* ChangeLocal()
{ int  i=10;
return &i; // Warning
}

int main()
{  int* p1= ChangeGlobal();
cout<<*p1<<endl;  // print 100
int* p2= ChangeLocal(); //Segmentation fault
cout<<*p2<<endl;
return 0;
} // Red colour indicate error
