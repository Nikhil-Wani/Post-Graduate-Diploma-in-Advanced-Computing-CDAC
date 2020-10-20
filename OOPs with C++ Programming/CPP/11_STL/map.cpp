#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;

int main()
{	
//Map test
map<int,string> mp;
char ch;
	do
	{
	int no;
	string name;
	cout<<"\n Enter  Roll NO:";
	cin>>no;
	cin.get();
	cout<<"\n Enter Name:";
	getline(cin,name);
	mp[no]=name;
	cout<<"\n do you want to continue (y or n):";
	cin>>ch;
	
	}while(ch!='n');	

//Traversing map
	
	cout<<"\n Values from map";
	map<int,string>::iterator it =mp.begin();
	while(it !=mp.end())
	{
		cout<<"\n RNO="<<it->first<<"\t"<<"Name="<<it->second;
		it++;
	
	}
//Seraching in map
	
	int rno;
	cout<<"\n Enter roll name whose name is to be found";
	cin>>rno;
	string name;
	if(mp.count(rno))
	{
	name =mp[rno];
	cout<<"\n Name of student:"<<name<<endl;
	}
	else
	{
	cout<<"\n Invalid Roll no"<<endl;
	}

//Erase from map//


	if(mp.count(rno))
	{

	mp.erase(rno);
	}
	else
	{
	cout<<"\n Invalid Roll no"<<endl;
	}

	it =mp.begin();
	while(it !=mp.end())
	{
		cout<<"\n RNO="<<it->first<<"\t"<<"Name="<<it->second;
		it++;
	
	}
//Seraching in map
//find
//mp.find(rno); returns iterator to element
return 0;
}
