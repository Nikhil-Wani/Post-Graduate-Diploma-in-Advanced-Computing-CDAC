template <class T>
class Node
{
	T data;
	Node *next;
	public:
	Node();
	void SetData(T data);
	T GetData();
	void SetNext(Node* temp);
	Node* GetNext();
};


