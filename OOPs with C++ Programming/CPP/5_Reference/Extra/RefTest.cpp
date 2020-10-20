#include<iostream>
#include<string>
using namespace std;

class RefTest
{
 string &str;
 int &i;

public:
RefTest()
{
}
RefTest(int k,string st):str(st),i(k)
{

cout<<"\n"<<str <<"\n"<<i;
}

void Display()
{

cout<<"\n"<<str<<"\n"<<i;
}
};


int main()
{

RefTest t(10,"aaa");
t.Display();
RefTest *t1 = new RefTest;
t1->Display();
RefTest *ptr = new RefTest[20];
return 0;
}
