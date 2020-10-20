#include"Node.cpp"
template <class T>
class DLinkedList
{
	Node<T> *head;
	Node<T> *tail;
	int count;

public:
  DLinkedList();
 ~DLinkedList();
  int size();
  bool empty();
  bool addAtBegin(T ele);
  bool addAtEnd(T ele);
  void display();
  T deleteFromBegin();
  T deleteFromEnd();
  
  
};
