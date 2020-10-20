#include"Node.h"
template<class T>
Node<T>::Node()
{

}

template <class T>
void Node<T>::SetData(T data)
{
this->data = data;
}

template <class T>
T Node<T>::GetData()
{
return data;
}


template <class T>
void Node<T>::SetNext(Node<T>* temp)
{
next = temp;
}
template <class T>
Node<T>* Node<T>::GetNext()
{
return next;
}



