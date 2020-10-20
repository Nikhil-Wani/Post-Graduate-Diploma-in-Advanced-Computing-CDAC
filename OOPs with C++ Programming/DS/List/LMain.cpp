#include"LinkedList.h"
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

int choice;
LinkedList<int> objList;

do
{
cout<<"\n *********MENU************";
cout<<"\n 1. Add at beginning";
cout<<"\n 2. Add at end";
cout<<"\n 3. Delete from beginning";
cout<<"\n 4. Delete from end";
cout<<"\n 5. Insert at position";
cout<<"\n 6. Reverse List";
cout<<"\n 7. Check for empty";
cout<<"\n 8. Get size";
cout<<"\n 9. Display";
cout<<"\n 10. Exit";
cout<<"\n Enter your choice:";
cin>>choice;
cin.get();

switch(choice)
{
case 1:	{
	int ele;
	cout<<"\n Enter element:";
	cin>>ele;
	if(!objList.addAtBegin(ele))
	   cout<<"\n Insertion Failed";
	else
		cout<<"\nInsertion succeded";
	}break;

case 2:	{
	int ele;
	cout<<"\n Enter element:";
	cin>>ele;
	if(!objList.addAtEnd(ele))
	   cout<<"\n Insertion Failed";
	else
		cout<<"\nInsertion succeded";
	}break;

case 3:	{
	int no = objList.deleteFromBegin();
		cout<<"\nDeleted Element:"<<no;;
	}break;
case 4:	{
	int no = objList.deleteFromEnd();
		cout<<"\nDeleted Element:"<<no;
	}break;
case 5:	{
	int pos;
	cout<<"\n Enter position";
	cin>>pos;
	int ele;
	cout<<"\n Enter element:";
	cin>>ele;
	if(!objList.insertAt(pos,ele))
		cout<<"\nInsertion failed, may be insufficient size";
	else
		cout<<"\nInsertion succeded";
	}break;
case 6:	{
	if(!objList.reverse())
		cout<<"\nReverse opeartion failed";
	else
		cout<<"\n List reversed";
	}break;
case 7: {
	 if(objList.empty())
		cout<<"\n List is empty";
	 else
		cout<<"\n List is not empty";
	}break;
case 8: {
	 cout<<"\n Size ="<<objList.size();
	}break;
case 9: {
	 objList.display();
	}break;
case 10:{}break;
}
}while(10 != choice);

return 0;
}
