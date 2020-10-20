#include"TreeNode.cpp"
template<class T>
class  BST
{
	private: 
	TreeNode<T> *root;

	public:
	
	BST();~BST();
	void Insert(T  ele);
	static void InOrder(TreeNode<T>* temp);
	static void PreOrder(TreeNode<T>* temp);
	static void PostOrder(TreeNode<T>* temp);
	static void Delete(TreeNode<T>* temp);
	static TreeNode<T>* FindMin(TreeNode<T>* temp);
	static TreeNode<T>* FindMax(TreeNode<T>* temp);
	T GetNodeData();
	TreeNode<T>* GetRootNode();
	bool Search(T val);
	static int  HeightOfTree(TreeNode<T>* temp);
};

