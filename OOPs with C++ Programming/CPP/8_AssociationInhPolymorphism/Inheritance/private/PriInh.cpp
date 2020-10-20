#include<iostream>
using namespace std;

class Base
{

private:
 int i;

public:

Base(int k):i(k)
{
}
void DecorShow()
{

cout<<"\n***** value of i:"<<i<<"*****";;

}

void Display()
{

cout<<"\n value of i:"<<i;
}
};


class Derived:Base
{

public:
Derived(int k):Base(k)
{
}
Base::Display;

};

int main()
{
Derived d(20);
d.Display();
d.DecorShow();

return 0;
}
