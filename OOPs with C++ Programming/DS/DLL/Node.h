template <class T>
class Node
{
	T data;
	Node *next;
	Node *prev;
	
	public:
	Node();
	void SetData(T data);
	T GetData();
	void SetNext(Node* temp);
	Node* GetNext();
	void SetPrev(Node* temp);
	Node* GetPrev();
};


