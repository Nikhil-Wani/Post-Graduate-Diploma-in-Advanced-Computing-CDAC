#include"DLinkedList.h"
#include<iostream>
using namespace std;

template <class T>
DLinkedList<T>::DLinkedList():count(0),head(NULL),tail(NULL)
 {
 }

template <class T>
DLinkedList<T>::~DLinkedList()
{
 Node<T> *t =NULL;
 while(head != NULL)
 {
	t = head;
	head = head->GetNext();
	delete t;
 }

}

template <class T>
int DLinkedList<T>::size()
{
 return count;
}

template <class T>
bool DLinkedList<T>::empty()
{
 return (NULL ==  head && NULL == tail);
}

template <class T>
bool DLinkedList<T>::addAtBegin(T ele)
{
  bool bSuccess = false;
  Node<T> *t = new Node<T>;
  t->SetData(ele);	  
	
	if(empty())
	{		
	 t->SetNext(NULL);
	 t->SetPrev(NULL);
	 head = t;
	 tail = t;
	 count++;
     bSuccess = true;
	}
	else
	{
	 t->SetNext(head);
	 t->SetPrev(NULL);
	 head->SetPrev(t);
	 head = t;
     count++;
     bSuccess = true;
	}
  return bSuccess;
}

template <class T>
bool DLinkedList<T>::addAtEnd(T ele)
{
  bool bSuccess = false;
  Node<T> *t = new Node<T>;
  t->SetData(ele);	  
	
	if(empty())
	{		
	 t->SetNext(NULL);
	 t->SetPrev(NULL);
	 head = t;
	 tail = t;
	 count++;
     bSuccess = true;
	}
	else
	{
	 t->SetNext(NULL);
	 t->SetPrev(tail);
	 tail->SetNext(t);
	 tail = t;
     count++;
     bSuccess = true;
	}
 return bSuccess;

}
template <class T>
void DLinkedList<T>::display()
{
 if(empty())
{
cout<<"\nNo items to display"<<endl;
return;
}
 cout<<"\n Linked List Contents"<<endl;
 Node<T> *t = NULL;
 t= head;
 while(t !=NULL)
 {
  cout<<t->GetData()<<"---->";
  t= t->GetNext();
 }
cout<<"NULL";

}


template <class T>
T DLinkedList<T>::deleteFromBegin()
{ T ele;
 if(!empty())
 {
    ele = head->GetData();
	Node<T> *t = head;
 	if(head == tail)
 	{
 	tail = NULL;
	head = NULL;
    delete t;
    count--;
 	}
    else
	{
	 ele = head->GetData();
 	 head = head->GetNext();
	 head->SetPrev(NULL);
  	 delete t;
  	 count--;
	}
 }
}

template <class T>
T DLinkedList<T>::deleteFromEnd()
{
 T ele;
 if(!empty())
 {
    ele = tail->GetData();
    Node<T> *t = tail;
 	if(head == tail)
 	{
        head = NULL;
		tail=NULL;
       	delete t;
        count--;
 	}
    else
	{
	 ele = tail->GetData();
 	 Node<T> *t = tail;
	 tail =tail->GetPrev();
	 tail->SetNext(NULL);
  	 delete t;
	 count--;
	}
 }
}
