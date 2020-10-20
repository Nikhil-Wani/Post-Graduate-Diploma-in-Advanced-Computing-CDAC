#include"DQueue.h"
#include<iostream>
using namespace std;
template<class T>
DQueue<T>::DQueue()
{
}

template<class T>
void DQueue<T>::AddAtEnd(T ele)
{
objLL.AddAtEnd(ele);
}


template<class T>
T DQueue<T>::DelFromEnd()
{
	T ele;
	ele = objLL.DeleteFromEnd();
	return ele;

}
template<class T>
void DQueue<T>::AddAtBeg(T ele)
{
objLL.AddAtBegin(ele);
}


template<class T>
T DQueue<T>::DelFromBeg()
{
	T ele;
	ele = objLL.DeleteFromBegin();
}

template<class T>
bool DQueue<T>::Full()
{
return false;
}

template<class T>
bool DQueue<T>::Empty()
{
return objLL.Empty();
}

template<class T>
DQueue<T>::~DQueue()
{


}
