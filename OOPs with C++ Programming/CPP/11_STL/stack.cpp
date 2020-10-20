#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> stk;
	char ch;
	do
	{
	int no;
	cout<<"\n Enter NO:"<<endl;
	cin>>no;
	stk.push(no);
	cout<<"\n do you want to continue(y or n)";
	cin>>ch;
	
	}while(ch!='n');	
	
	 cout<<"\n Printing stack elements"<<endl;
	while(!stk.empty())
	{
	cout<<"\n"<<stk.top();
	stk.pop();
	}		
	return 0;
}

