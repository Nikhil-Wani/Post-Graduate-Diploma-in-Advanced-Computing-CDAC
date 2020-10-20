template <class T>
class  TreeNode
{
   T  data;
   TreeNode<T> *left;
   TreeNode<T> *right;

public:  
   void SetData(T temp);
   T GetData();
   void SetLeft(TreeNode<T>* temp);
   TreeNode<T>* GetLeft();
   void SetRight(TreeNode<T>* temp);
   TreeNode<T>* GetRight();

};

