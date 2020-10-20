#include<iostream>
#include<string>
using namespace std;
int main()
{
char *cp = "Name";
cin.getline(cp, 100);
cout<<cp;
return 0;
}