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
  int size();
  bool empty();
  bool addAtBegin(T ele);
  bool addAtEnd(T ele);
  void display();
  T deleteFromBegin();
  T deleteFromEnd();
  bool insertAt(int pos,T ele);
  bool reverse();
  
};
