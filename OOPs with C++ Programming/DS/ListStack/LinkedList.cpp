#include"LinkedList.h"
#include<iostream>
#include<stdexcept>
using namespace std;

template <class T>
LinkedList<T>::LinkedList():count(0),head(NULL),tail(NULL)
 {
 }

template <class T>
LinkedList<T>::~LinkedList()
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
int LinkedList<T>::Size()
{
 return count;
}

template <class T>
bool LinkedList<T>::Empty()
{
 return (NULL ==  head);
}

template <class T>
void  LinkedList<T>::AddAtBegin(T ele)
{
  
  Node<T> *t = new Node<T>;
  t->SetData(ele);	  
	
	if(Empty())
	{		
	 t->SetNext(NULL);
	 head = t;
	 tail = t;
	 count++;
        }
	else
	{
	 t->SetNext(head);
	 head = t;
         count++;
    	}
 }



template <class T>
T LinkedList<T>::DeleteFromBegin()
{ 
 	T ele;
	if(Empty())
	{
	throw runtime_error("List is empty");

	}
	else
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
  	 	delete t;
  		count--;
	 	}
 	}
	return ele;
}
