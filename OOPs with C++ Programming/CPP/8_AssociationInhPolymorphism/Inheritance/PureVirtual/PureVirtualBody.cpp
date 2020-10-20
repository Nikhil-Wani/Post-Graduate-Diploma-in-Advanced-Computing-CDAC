#include<iostream>
using namespace std;

class Interface
{
virtual void fun()=0;
};


void Interface::fun()
{
cout<<"\n Can have body outside class";
}

int main()
{
return 0;
}
