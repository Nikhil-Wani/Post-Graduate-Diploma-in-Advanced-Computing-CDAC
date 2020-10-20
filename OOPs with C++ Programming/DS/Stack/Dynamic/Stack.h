#include <iostream>
#include <string>
#include<stdexcept>
using namespace std;

#define BOTTOM -1

template<class T>
class Stack
{
	private:
	T *arr;
	int top;
	int size;

	public:
	Stack(int s);
	bool Push(T);
	T Pop() throw(runtime_error);
	T Peep() throw(runtime_error);
	bool IsEmpty();
	bool IsFull();
	~Stack();
};




