#include"TreeNode.h"

template <class T>
void TreeNode<T>::SetData(T temp)
{
 data = temp;
}

template <class T>
T TreeNode<T>::GetData()
{
 return data;
}

template <class T>
void TreeNode<T>::SetLeft(TreeNode<T>* temp)
{
 left = temp;
}


template <class T>
TreeNode<T>* TreeNode<T>::GetLeft()
{
 return left;
}

template <class T>
void TreeNode<T>::SetRight(TreeNode<T>* temp)
{
 right = temp;
}


template <class T>
TreeNode<T>* TreeNode<T>::GetRight()
{
 return right;
}
