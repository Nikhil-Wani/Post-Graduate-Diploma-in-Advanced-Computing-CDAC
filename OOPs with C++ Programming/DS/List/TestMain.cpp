#include"LinkedList.cpp"
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

int choice;
LinkedList<int> objList;
objList.addAtBegin(10);
objList.addAtBegin(20);
objList.addAtBegin(30);
objList.display();
cout<<"\n Size="<<objList.size();


return 0;
}
