#include"Queue.h"
#include<iostream>
using namespace std;

template<class T>
Queue<T>::Queue():rear(0),front(0)
{
}

template<class T>
bool Queue<T>::AddQ(T ele)
{
	bool bSuccess = false;
	if(!IsFull())
	{
		//for normal Queue
		arr[rear]= ele;
		rear++;
		bSuccess =true;
	}
	return bSuccess;

}


template<class T>
T Queue<T>::DelQ()throw (runtime_error)
{
	T ele;
	if(!IsEmpty())
	{	
		//For normal Queue
		ele = arr[front++];
	}
	else
	{
	throw runtime_error("Queue is empty");
	}
	return ele;
	

}

template<class T>
bool Queue<T>::IsFull()
{

//for normal Queue
return (SIZE  == rear);
}

template<class T>
bool Queue<T>::IsEmpty()
{
return(front == rear);
}

template<class T>
Queue<T>::~Queue()
{
}

