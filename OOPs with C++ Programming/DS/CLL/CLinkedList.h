#include"Node.cpp"
template <class T>
class CLinkedList
{
Node<T> *head;
Node<T> *tail;
int count;

public:
  CLinkedList();
 ~CLinkedList();
  int size();
  bool empty();
  bool addAtBegin(T ele);
  bool addAtEnd(T ele);
  void display();
  T deleteFromBegin();
  T deleteFromEnd();
};
