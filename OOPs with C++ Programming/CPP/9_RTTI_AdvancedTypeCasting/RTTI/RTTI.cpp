#include<typeinfo>
#include<iostream>
#include<string>
using namespace std;


int main()
{

string s;
cout<<typeid(s).name();
return 0;
}
