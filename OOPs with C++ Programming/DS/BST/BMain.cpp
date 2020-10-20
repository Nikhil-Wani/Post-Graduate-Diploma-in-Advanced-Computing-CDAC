#include"BST.cpp"
#include<iostream>
using namespace std;
int  main()
{
	int ch;
	int a;
	//char a;
	
	BST<int> objBST;
	//BST<char> objBST;

	
	do
	{
		cout<<"\n1. Insert"
		<<"\n2. InOrder"
		<<"\n3. PreOrder"
		<<"\n4. PostOrder"
		<<"\n5. Height"
		<<"\n6. Exit"
		<<"\n\nEnter Your Choice : ";
		cin>>ch;
		switch(ch)
		{

			case 1:
			cout<<"Enter an element : ";
			cin>>a;
			objBST.Insert(a);
			break;
			case 2:
			BST<int>::InOrder(objBST.GetRootNode());
			break;
			case 3:
			BST<int>::PreOrder(objBST.GetRootNode());
			break;
			case 4:
			BST<int>::PostOrder(objBST.GetRootNode());
			break;
			case 5:	{
			int height = BST<int>::HeightOfTree(objBST.GetRootNode());
			cout<<"Height of tree:"<<height<<endl;
				}
			break;
			default:cout<<"Invalid Choice";
		}
	}while(ch != 6);
}
