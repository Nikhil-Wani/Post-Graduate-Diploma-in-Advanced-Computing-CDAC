#include<iostream>
using namespace std;
int main()
{
int *p = NULL;
cout<<*p;  
return 0;
} // predictable output
// Segmentation fault
