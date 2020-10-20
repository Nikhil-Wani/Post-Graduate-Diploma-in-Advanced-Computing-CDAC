#include"CLinkedList.cpp"
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

int choice;
CLinkedList<int> objList;
objList.addAtBegin(10);
objList.addAtBegin(20);
objList.addAtEnd(40);
objList.addAtBegin(60);
objList.deleteFromBegin();
objList.display();
cout<<"\n Size="<<objList.size();


return 0;
}
