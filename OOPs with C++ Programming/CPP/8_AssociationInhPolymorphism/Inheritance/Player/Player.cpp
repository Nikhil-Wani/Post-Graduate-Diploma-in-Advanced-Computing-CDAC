#include<string>
#include<iostream>
using namespace std;

class Player
{
private:
string name;
int age;
public:

Player()
{

}

virtual void Accept()
{
	cout<<"\n Enter Name:";
	cin>>name;
	cout<<"\n Enter Age:";
	cin>>age;
}

virtual void Display()
{
	cout<<"\n Name:"<<name;
	cout<<"\n Age:"<<age;
}

};