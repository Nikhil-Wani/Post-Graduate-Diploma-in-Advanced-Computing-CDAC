#include<vector>
#include<iostream>
#include<string>
#include<list>
#include<deque>
using namespace std;


int main()
{
//for int vector
	/*int no;
	vector<int> obj;
	cout<<"\n Enter a number and press 0 to stop"<<endl;
	cin>>no;
	while(no!=0)
	{
		obj.push_back(no);
		cin>>no;
	}

	vector<int>::iterator it= obj.begin();
	int count=0;

	while(count < obj.capacity())
	{
	 no=*it;
	 cout<<"\n"<<no;
	 ++it;
	 count++;
	}*/
//for stings vector
	char ch;
	vector<string> obj;
	cout<<"\n Capacity="<<obj.capacity();
	cout<<"\n Capacity="<<obj.max_size();
	do
	{
	string str;
	cout<<"\n Enter string"<<endl;
	getline(cin,str);
	obj.push_back(str);
	cout<<"\n Do u want to continue (y or n)"<<endl;
	cin>>ch;
	cin.get();
	}while(ch !='n');

/*
	
	cout<<"\n Capacity="<<obj.capacity();
	vector<string>::iterator first = obj.begin();
      	vector<string>::iterator last = obj.end();
*/
/*	while(first !=last)
	{
	 cout<<"\n"<<*first++<<endl;
	}
*/
/*	for(int i=0;i<obj.size();i++)
	{	
	cout<<"\n"<<obj[i];
	}
*/

//Vector intialiased
	/*vector<string> vct(10,"praphul"); 
	if(vct.empty())
	{
	cout<<"\n Not empty";
	}
	for(int i=0;i<vct.size();i++)
	{	
	cout<<"\n"<<vct[i];
	}*/
//copy from one vct to other
/*	vector<string> copy(obj);
	for(int i=0;i<obj.size();i++)
	{	
	cout<<"\n"<<obj[i];
	}

*/	vector<string>::iterator mid= obj.begin()+obj.size()/2;
	vector<string>::iterator start = obj.begin();
	vector<string>::iterator last = obj.end();
	
	cout<<"\n List contents"<<endl;
	list<string> ll(start,mid);
	list<string>::iterator listbegin=ll.begin();
	while(listbegin != ll.end())
	{	
	cout<<"\n"<<*listbegin++;
	}
	
	cout<<"\n Deque contents"<<endl;
	deque<string> dq(mid,last);
	deque<string>::iterator dqbegin =dq.begin();
	while(dqbegin != dq.end())
	{	
	cout<<"\n"<<*dqbegin++;
	}

//dq.clear();
//erase(begin)
//dq.erase(begi,end);
//
//find in list
//list<string>::iterator iter = find(ll.begin(),ll.end(),"abx");
//ll.erase(iter);
//
//Insert in lis
//ll.insert(itr,"KKKK");
	return 0;
}

