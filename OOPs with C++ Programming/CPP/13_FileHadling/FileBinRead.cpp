#include<iostream>
#include<fstream>
#include"Student.h"
using namespace std;
int main()
{

	char fname[100];
	cout<<"\n Enter filename"<<endl;
	cin>>fname;
	ifstream fin(fname,ios::binary);
	if(!fin)
	{
		cout<<"\n File Not found"<<endl;
		return -1;
	}
	cout<<"\n Student records from file"<<endl;
	Student s;
	/*while(!fin.eof())
	{

         fin.read((char*)&s,sizeof(Student));
	 s.Display();
	}*/
	
	while(fin.read((char*)&s,sizeof(Student)))
	{
		cout<<"\n Inside while"<<endl;
		s.Display();	
	}
	fin.close();
	return 0;
}
