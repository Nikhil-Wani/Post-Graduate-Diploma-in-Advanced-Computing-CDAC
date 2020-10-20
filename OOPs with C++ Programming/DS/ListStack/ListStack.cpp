#include "ListStack.h"

//Constructor
template<class T>
ListStack<T>::ListStack()
{
	
}

//Function to add element in stack
template<class T>
void ListStack<T>::Push(T ele)
{
    objLL.AddAtBegin(ele);

}

//Function to get element from stack
template<class T>
T ListStack<T>::Pop()
{
 return objLL.DeleteFromBegin();
}

//Function to check whether stack is empty
template<class T>
bool ListStack<T>::Empty()
{
	return objLL.Empty();
}


//Function to check whether stack is full
template<class T>
bool ListStack<T>::Full()
{
	return false;
	
}

//Destructor
template<class T>
ListStack<T>::~ListStack()
{
}
