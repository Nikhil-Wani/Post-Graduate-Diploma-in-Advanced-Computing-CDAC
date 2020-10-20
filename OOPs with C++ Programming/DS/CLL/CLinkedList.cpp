#include"CLinkedList.h"
#include<iostream>
using namespace std;

template <class T>
CLinkedList<T>::CLinkedList():count(0),head(NULL),tail(NULL)
 {
 }

template <class T>
CLinkedList<T>::~CLinkedList()
{
cout<<"\n Dtor called"<<endl;
 Node<T> *t = head;
 while(t != tail)
 {
	head = head->GetNext();
	delete t;
	t = head;
 }
 delete tail;
}


template <class T>
int CLinkedList<T>::size()
{
 return count;
}

template <class T>
bool CLinkedList<T>::empty()
{
 return (NULL == head && NULL == tail);
}

template <class T>
bool CLinkedList<T>::addAtBegin(T ele)
{
  bool bSuccess = false;
  Node<T> *t = new Node<T>;
  t->SetData(ele);	  
	
	if(empty())
	{		
	 t->SetNext(t);
	 head = t;
	 tail = t;
	 count++;
     bSuccess = true;
	}
	else
	{
	 t->SetNext(head);
	 head = t;
	 tail->SetNext(head);
     count++;
     bSuccess = true;
	}
  return bSuccess;
}

template <class T>
bool CLinkedList<T>::addAtEnd(T ele)
{
  bool bSuccess = false;
  Node<T> *t = new Node<T>;
  t->SetData(ele);	  
	
	if(empty())
	{		
	 t->SetNext(t);
	 head = t;
	 tail = t;
	 count++;
     bSuccess = true;
	}
	else
	{
	 tail->SetNext(t);
	 t->SetNext(head);
	 tail = t;
     count++;
     bSuccess = true;
	}
 return bSuccess;
}
template <class T>
void CLinkedList<T>::display()
{
 if(empty())
	{
	cout<<"\nNo items to display"<<endl;
	return;
	}
 cout<<"\n Linked List Contents"<<endl;
 Node<T> *t = NULL;
 t= head;
 while(t!= tail)
 {
  cout<<t->GetData()<<"---->";
  t= t->GetNext();
 }
 cout<<tail->GetData()<<"---->";
}


template <class T>
T CLinkedList<T>::deleteFromBegin()
{ 
 T ele;
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
	 tail->SetNext(head);
  	 delete t;
  	 count--;
	 
	}
 }
return ele;

}

template <class T>
T CLinkedList<T>::deleteFromEnd()
{
 
 if(!empty())
 {
      ele = tail->GetData();
      Node<T> *t = tail;
 	if(head == tail)
 	{
        head = NULL;
       	delete tail;
		tail= NULL;
        count--;
 	}
    else
	{
 	 Node<T> *t = head;
	 while(tail != t->GetNext()) 
	 {
 	   t = t->GetNext();
	 }
		ele=tail->GetData();
         t->SetNext(head);
		 delete tail;
         count--;
		 tail = t;
         
        }

	}
 return ele;
}

