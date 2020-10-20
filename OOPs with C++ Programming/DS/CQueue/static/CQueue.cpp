#include"CQueue.h"
template<class T>
CQueue<T>::CQueue()
 {
   front=rear=0;
 }

template<class T>
CQueue<T>::~CQueue()
{

}

template<class T>
bool CQueue<T>::IsEmpty()
{
 return (rear == front);
}

template<class T>
bool CQueue<T>::IsFull()
{
return ((rear+1)%SIZE == front);

}
template<class T>
bool CQueue<T>:: AddQ(T ele)
 {
   bool bSuccess = false;
   if(!IsFull())
    {
       arr[rear]=ele;
       rear=(rear+1)%SIZE;
       bSuccess = true;
    }
 return bSuccess;
 }

template<class T>
T CQueue<T> :: DelQ()throw (runtime_error)
 {
   T ele;
   if(!IsEmpty())
    {
      ele = arr[front];
      front=(front+1)%SIZE;
    }
	else
	{
	throw runtime_error("CQueue is empty");
	}
	return ele;
  
 }
