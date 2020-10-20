#include "LinkedList.cpp"
#include <iostream>
#include <string>
using namespace std;

template<class T>
class ListStack
{
	private:
	LinkedList<T> objLL;

	public:
	ListStack();
	~ListStack();
	void Push(T ele);
	T Pop();
	bool Empty();
	bool Full();
};




