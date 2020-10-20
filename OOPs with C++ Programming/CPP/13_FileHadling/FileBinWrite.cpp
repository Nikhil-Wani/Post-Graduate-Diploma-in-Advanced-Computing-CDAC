#include"Student.h"
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char fname[100];
	cout<<"\n Enter filename:";
	cin>>fname;
	ofstream fout(fname,ios::app|ios::binary);
	if(!fout)
	{
		cout<<"\n File Not found";
		return -1;
	}

	int cnt=0;
	char ch;

	Student s;
	do
	{
	s.Accept();
	fout.write((char*)&s,sizeof(Student));
	cout<<"\n Do u want to add more student (y or n)"<<endl;
	cin>>ch;
	cin.get();
	}while(ch !='n');
	
	fout.close();
	return 0;
}
