#include<fstream>
#include<iostream>
#include<string>
using namespace std;

//Program to read from console and write it to file.
int main()
{
    ifstream fin;
    fin.open("abc.txt");
   
// ifstream fin("abc.txt");
	if(!fin)
	{
	 cout<<"\n unable to open file"<<endl;
 	}
  
 	char ch;
	string str;
	while(!fin.eof())
	{
	//Using string
	getline(fin,str);
	cout<<str;
	}
  	
	fin.close();
    return 0;
}

