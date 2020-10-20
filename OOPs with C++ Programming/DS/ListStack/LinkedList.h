#include"Node.cpp"
template <class T>
class LinkedList
{
Node<T> *head;
Node<T> *tail;
int count;

public:
  LinkedList();
 ~LinkedList();
  int Size();
  bool Empty();
  void AddAtBegin(T ele);
  T DeleteFromBegin();
 };
