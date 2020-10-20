#include"BST.h"
#include<iostream>
#include<stdexcept>
using namespace std;
template<class T>
BST<T>::BST()
{
	root = NULL;
}

template<class T>
BST<T>::~BST()
{
	Delete(root);
}

template<class T>
void BST<T>::Delete(TreeNode<T>* temp)
{
  if (temp != NULL) 
  {
	   Delete(temp->GetLeft());
	   Delete(temp->GetRight());
  }
  delete temp;
}

template<class T>
void BST<T>::InOrder(TreeNode<T>* temp)
{
  if (temp != NULL) 
  {
	   InOrder(temp->GetLeft());
	   cout<<temp->GetData()<<"\t";
	   InOrder(temp->GetRight());
  }
}

template<class T>
void BST<T>::PreOrder(TreeNode<T>* temp)
{
  if (temp != NULL) 
  {
	   cout<<temp->GetData()<<"\t";
	   PreOrder(temp->GetLeft());
	   PreOrder(temp->GetRight());
  }
}

template<class T>
void BST<T>::PostOrder(TreeNode<T>* temp)
{
  if (temp != NULL) 
  {
	   PostOrder(temp->GetLeft());
	   PostOrder(temp->GetRight());
	   cout<<temp->GetData()<<"\t";
  }
}
template<class T>
TreeNode<T>* BST<T>::GetRootNode()
{
	return root;

}

template<class T>
void BST<T>::Insert(T iData)
 {
    TreeNode<T> *t  = new TreeNode<T>;
	t->SetLeft(NULL);
	t->SetData(iData);
	t->SetRight(NULL);

	if (root == NULL) 
	{
		root = t;
	}
	else 
	{
		TreeNode<T>* current = root;
		while (current != NULL)
		{
			if(iData == current->GetData())
			{
				throw runtime_error("Duplicate values");
			}
			if (iData < current->GetData()) 
			{
				// insert left
				if (current->GetLeft() == NULL) 
				{
					current->SetLeft(t);
					return;
				} 
				else 
				{
					current = current->GetLeft();
				}
 
			}
			else 
			{
				// insert right
				if (current->GetRight() == NULL)
				{
					current->SetRight(t);
					return;
				} 
				else 
				{
					current = current->GetRight();
				}
			}
		}
	}
}





template<class T>
bool BST<T>::Search(T val)
{
   TreeNode<T> *temp = root;
 
    while (temp != NULL) 
    {
        if (val == temp->GetData()) 
	{
            return true;
        } 
	else if (val < temp->GetData())
	{
            temp = temp->GetLeft();   
        } 
	else
	{
            temp = temp->GetRight();
        }
    } 
 
    return false;
}


template<class T>
TreeNode<T>* BST<T>::FindMin(TreeNode<T>* t)
{
	if(t == NULL || t->GetLeft() == NULL)
	{
		return t;
	}
	else
	{
		return FindMin(t->GetLeft());
	}
}


template<class T>
TreeNode<T>* BST<T>::FindMax(TreeNode<T>* t)
{
	if(t==NULL || t->GetRight()==NULL)
	{
		return t;
	}
	else
	{
		return FindMax(t->GetRight());
	}
}

template<class T>
int  BST<T>::HeightOfTree(TreeNode<T>*  temp)
{
	int l = 0;
	int r = 0;
	
	if(temp == NULL)
	{
		return 0;
	}
	
	l = HeightOfTree(temp->GetLeft());
	r = HeightOfTree(temp->GetRight());
	if( l > r || l == r)
	{
		return (l + 1);
	}
	else
	{
		return (r + 1);
	}

}

