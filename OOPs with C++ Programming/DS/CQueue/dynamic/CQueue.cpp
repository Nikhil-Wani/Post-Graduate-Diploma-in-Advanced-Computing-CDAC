#include"CQueue.h"
template<class T>
CQueue<T>::CQueue(int s)
 {
   front=rear=0;
   size = s;
   arr = new T[size];
 }

template<class T>
CQueue<T>::~CQueue()
{
	delete []arr;
}

template<class T>
bool CQueue<T>::IsEmpty()
{
 return (rear == front);
}

template<class T>
bool CQueue<T>::IsFull()
{
return ((rear+1)%size == front);

}
template<class T>
bool CQueue<T>:: AddQ(T ele)
 {
   bool bSuccess = false;
   if(!IsFull())
    {
       arr[rear]=ele;
       rear=(rear+1)%size;
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
      front=(front+1)%size;
    }
	else
	{
	throw runtime_error("CQueue is empty");
	}
	return ele;
  
 }
