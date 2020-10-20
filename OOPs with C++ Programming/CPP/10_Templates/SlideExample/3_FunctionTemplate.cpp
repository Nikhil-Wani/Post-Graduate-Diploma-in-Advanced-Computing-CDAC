#include<iostream>
using namespace std;
template<class T>
   void swap(T &x, T &y)
   { T temp = x; x = y; 
     y = temp;
   }

int main()
{ int a=10, b=20;
 swap(a,b);
 cout<<"\n"<<a<<" "<<b;
float p=10.10, k=20.20;
swap(p,k);
 cout<<"\n"<<p<<" "<<k;
return 0; }
