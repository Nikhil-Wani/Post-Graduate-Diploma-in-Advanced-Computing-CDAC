#include<iostream>
using namespace std;

class A
{

public:
static void fun()
{

cout<<"\n class A"<<endl;
}
};


class B:public A
{
public:
 static void fun()
{
cout<<"\n class B";
}
};

int main()
{
 B::fun();
}
