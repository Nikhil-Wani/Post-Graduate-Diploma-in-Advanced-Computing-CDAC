template <class T>
class Node
{
	T data;
	Node<T> * next;
	
	public:
	Node();
	void SetData(T data);
	T GetData();
	void SetNext(Node<T>* temp);
	Node<T>* GetNext();
};


