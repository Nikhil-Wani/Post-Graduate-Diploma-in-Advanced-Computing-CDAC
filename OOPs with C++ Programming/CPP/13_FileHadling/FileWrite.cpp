#include<fstream>
#include<string>
#include<iostream>
using namespace std;

//Program to read from console and write it to file.
int main()
{
    ofstream fout;
    fout.open("abc.txt");
   
// ofstream fout("abc.txt");
	if(!fout)
	{
	 cout<<"\n unable to open file"<<endl;
 	}
  
 	char ch;
	do
	{
	string str;
	cout<<"\n Enter string"<<endl;
	getline(cin,str);
	fout<<str;
	cout<<"\n Do u want to continue (y or n)"<<endl;
	cin>>ch;
	cin.get();
	}while(ch !='n');
  	
	fout.close();
    return 0;
}

