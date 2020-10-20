#include"DQueue.cpp"
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

int choice;
DQueue<int> objQueue;

do
{
cout<<"\n *********MENU************";
cout<<"\n 1. Add at end";
cout<<"\n 2. Del from end";
cout<<"\n 3. Add at begin";
cout<<"\n 4. Del from begin";
cout<<"\n 5. exit";
cout<<"\n Enter your choice:";
cin>>choice;
cin.get();

switch(choice)
{
case 1:	{
	int ele;
	cout<<"\n Enter element:";
	cin>>ele;
	objQueue.AddAtEnd(ele);
	}break;

case 2:	{
	int ele = objQueue.DelFromEnd();
		cout<<"\n Deleted element:"<<ele;
		}break;
case 3:	{
	int ele;
	cout<<"\n Enter element:";
	cin>>ele;
	objQueue.AddAtBeg(ele);
	}break;

case 4:	{
	int ele = objQueue.DelFromBeg();
		cout<<"\nDeleted Element"<<ele;
	}break;
}
}while(5!=choice);

return 0;
}
