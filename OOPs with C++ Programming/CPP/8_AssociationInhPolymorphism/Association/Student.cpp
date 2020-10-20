#include<iostream>
#include<string>
#include "Address.cpp"
using namespace std;
 class Student
 {
	 int rno;
	 string strName;
	 Address permAddress;
	
	 public:
	 Student()
	 {
	  rno=0;
	  strName ="";
	 }
	 Student(int i,string str):permAddress("401","westside","411061")
	 {
		 rno= i;
		 strName=str;
	 }
	 void Accept()
	 {
		 cout<<"\n RNO:";
		 cin>>rno;
		 cout<<"\n Name:";
		 cin>>strName;
		 permAddress.Accept();
	 }

	 void Display()
	 {
		 cout<<"\n RNO="<<rno<<"\n Name="<<strName;
		 permAddress.Display();
		 
	 }
 };



int main()
{
	//Student s(1,"Jitendra");
	Student s;
	s.Accept();
	s.Display();
return 0;
}
