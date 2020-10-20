#include<iostream>
using namespace std;
void swap( int &ra , int &rb)
{ int  k = ra;
ra = rb;
rb =k; }

int main()
{ int a= 10; int b =20;
swap(a,b); 
cout<<"\n"<<a<<"\n"<<b; 
return 0;
}
