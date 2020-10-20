#include"Student.h"
#include<iostream>
using namespace std;

void Student::Accept()
{
cout<<"\n Enter RNO:"<<endl;
cin>>rno;
cin.get();
cout<<"\n Enter Name:"<<endl;
cin.getline(name,50);
//getline(cin,name);
}

void Student::Display()
{
cout<<"\n RNO:"<<rno<<"\t"<<"Name:"<<name<<endl;
}

