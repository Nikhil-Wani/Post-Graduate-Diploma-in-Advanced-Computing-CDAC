#include"LinkedList.cpp"

template<class T>

class DQueue
{
private:
LinkedList<T> objLL;

public:
DQueue();
~DQueue();
void AddAtEnd(T ele);
T DelFromEnd();
void AddAtBeg(T ele);
T DelFromBeg();
bool Full();
bool Empty();
};
