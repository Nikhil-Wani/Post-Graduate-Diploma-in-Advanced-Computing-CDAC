#include<iostream>
using namespace std;
int sum(int a, int b)
{return a+b;
}

double sum(double a, double b)
{return a+b;
}
int main(){
//call sum with 2 args
 cout<<"\n"<<sum(10,20);
//call sum for double args
 cout<<"\n"<<sum(10.5,20.7);
 return 0;
}