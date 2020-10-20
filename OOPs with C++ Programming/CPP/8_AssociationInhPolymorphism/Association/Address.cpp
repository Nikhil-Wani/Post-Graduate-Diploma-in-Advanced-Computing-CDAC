#include<iostream>
#include<string>
using namespace std;
class Address{
private:
string FlatNo;
string Area;
string Pin;
public:
Address():FlatNo(""),Area(""),Pin("")
{
}

Address(string a,string b,string c)
:FlatNo(a),Area(b),Pin(c)
{
}
void Accept()
{
cout<<"\nEnter Flat NO:"<<endl;
cin>>FlatNo;
cout<<"\nEnter Area:"<<endl;
cin>>Area;
cout<<"\nEnter Pin:"<<endl;
cin>>Pin;

}

void Display()
{
cout<<"\n Flat NO:"<<FlatNo;
cout<<"\n Area"<<Area;
cout<<"\n PIN NO:"<<Pin;

}
};