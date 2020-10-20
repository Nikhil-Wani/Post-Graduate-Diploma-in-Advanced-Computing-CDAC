#include"DLinkedList.cpp"
#include<iostream>
using namespace std;

int main()
{

int choice;
DLinkedList<int> objList;

do
{
cout<<"\n *********MENU************";
cout<<"\n 1. Add at beginning";
cout<<"\n 2. Add at end";
cout<<"\n 3. Delete from beginning";
cout<<"\n 4. Delete from end";
cout<<"\n 5. Check for empty";
cout<<"\n 6. Get size";
cout<<"\n 7. Display";
cout<<"\n 8. Exit";
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
		cout<<"\nInsertion succeed";
	}break;

case 2:	{
	int ele;
	cout<<"\n Enter element:";
	cin>>ele;
	if(!objList.addAtEnd(ele))
	   cout<<"\n Insertion Failed";
	else
		cout<<"\nInsertion succeeded";
	}break;

case 3:	{
	int no = objList.deleteFromBegin();
	cout<<"\nDeleted Element:"<<no;;
	}break;
case 4:	{
	int no = objList.deleteFromEnd();
	cout<<"\nDeleted Element:"<<no;
	}break;
case 5: {
	 if(objList.empty())
		cout<<"\n List is empty";
	 else
		cout<<"\n List is not empty";
	}break;
case 6: {
	 cout<<"\n Size ="<<objList.size();
	}break;
case 7: {
	 objList.display();
	}break;
case 8:{}break;
}
}while(8 != choice);

return 0;
}
