#include<iostream>
using namespace std;
int sum(int a, int b)
{return a+b;
}

int sum(int a, int b, int c)
{return a+b+c;
}
 int main(){
//call sum with 2 args
 cout<<sum(10,20);
//call sum with 3 args
 cout<<sum(10,20,30);
 return 0;
}

