#include "Stack.h"
//Constructor
template<class T>
Stack<T>::Stack()
{
	top = BOTTOM;
}

//Function to add element in stack
template<class T>
bool  Stack<T>::Push(T ele)
{
  	if(IsFull())
	{
		return false;
	}
	else
	{
		top++;
		arr[top] = ele;
		return true;
	}

}

//Function to get element from stack
template<class T>
T Stack<T>::Pop() throw(runtime_error)
{
	T elePopped ;
	if(IsEmpty())
	{
		throw runtime_error("Stack underflow");
	}
	else
	{
		elePopped = arr[top];
		top--;
	}
	return elePopped;
}

//Function to check whether stack is empty
template<class T>
bool Stack<T>::IsEmpty()
{
	return (top == BOTTOM);
}


//Function to check whether stack is full
template<class T>
bool Stack<T>::IsFull()
{
	return (top == SIZE-1);
	
}

//Function to get elemnt at top of stack
template<class T>
T Stack<T>::Peep() throw(runtime_error)
{
	T ele;
	if(IsEmpty())
	{
		throw runtime_error("Stack underflow");
	}
	else
	{
	ele= arr[top];
	}
	return ele;
}
