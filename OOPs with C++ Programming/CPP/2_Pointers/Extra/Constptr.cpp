#include<iostream>
using namespace std;
int main()
{	

const int s= 10;
cout<<"\n"<< s;
int * p = NULL;
p =(int *)&s;
cout<<","<<*p;
*p = 100;
cout<<","<<*p;
cout<<","<< s;
return 0;
}
