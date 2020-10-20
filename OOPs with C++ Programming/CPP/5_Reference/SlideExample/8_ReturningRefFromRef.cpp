#include<iostream>
using namespace std;
int&  sum(int a, int b)
{ int s = a+b;
return s;}

int main(){
int  c = sum(10,20);
cout<< c;
return 0;
} // This program will result in compilation error &segmentation fault
