#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct AVLNode
 {
     string Name;
     int Balance;
     AVLNode *LeftChild;
     AVLNode *RightChild;
};
 
class  AVL
{
 AVLNode * root;

public:
AVLNode* GetRootNode()
{
return root;
}


void InputData(ifstream &InFile)
 {
     AVLNode *temp = NULL;
     AVLNode *Leaf= NULL;
     while(!InFile.eof())
     {
         Leaf = new AVLNode;
         getline(InFile, Leaf->Name);
         Leaf->Balance = 0;
         Leaf->RightChild = Leaf->LeftChild = NULL;
         if(temp == NULL)
             temp = Leaf;
         temp = InsertData(Leaf, temp);
     }
     root= temp;
 }


static AVLNode *InsertData(AVLNode *Leaf, AVLNode *Root)
 {
     if(Root == NULL)
         return Leaf;
     else if(Leaf->Name < Root->Name)
     {
         Root->LeftChild = InsertData(Leaf, Root->LeftChild);
         if(FindBalance(Root->LeftChild) - FindBalance(Root->RightChild) == 2)
         {
             if(Leaf->Name < Root->LeftChild->Name)
                 Root = LeftLeft(Root);
             else
                 Root = LeftRight(Root);
         }
     }
     else if(Leaf->Name > Root->Name)
     {
         Root->RightChild = InsertData(Leaf, Root->RightChild);
         if(FindBalance(Root->RightChild) - FindBalance(Root->LeftChild) == 2)
         {
             if(Leaf->Name > Root->RightChild->Name)
                 Root = RightRight(Root);
             else
                 Root = RightLeft(Root);
         }
     }
     Root->Balance = max(FindBalance(Root->LeftChild), FindBalance(Root->RightChild)) + 1;
     return Root;
 }


static  int FindBalance(AVLNode *Root)
{
     if(Root == NULL)
         return -1;
     else
         return Root->Balance;
 }


static AVLNode *LeftLeft(AVLNode *Rotate)
 {
     AVLNode *Pivot = Rotate->LeftChild;
     Rotate->LeftChild = Pivot->RightChild;
     Pivot->RightChild = Rotate;
     Rotate->Balance = max(FindBalance(Rotate->LeftChild), FindBalance(Rotate->RightChild)) + 1;
     Pivot->Balance = max(FindBalance(Pivot->LeftChild), FindBalance(Rotate->RightChild)) + 1;
     return Pivot;
 }


static AVLNode *RightRight(AVLNode *Rotate)
 {
     AVLNode *Pivot = Rotate->RightChild;
     Rotate->RightChild = Pivot->LeftChild;
     Pivot->LeftChild = Rotate;
     Rotate->Balance = max(FindBalance(Rotate->LeftChild), FindBalance(Rotate->RightChild)) + 1;
     Pivot->Balance = max(FindBalance(Pivot->RightChild), FindBalance(Rotate->LeftChild)) + 1;
     return Pivot;
 }


static AVLNode *LeftRight(AVLNode *RotateTop)
 {
     RotateTop->LeftChild = RightRight(RotateTop->LeftChild);
     return LeftLeft(RotateTop);
 }

static AVLNode *RightLeft(AVLNode *RotateTop)
 {
     RotateTop->RightChild = LeftLeft(RotateTop->RightChild);
     return RightRight(RotateTop);
 }

static void Traversal(AVLNode *Root)
 {
     AVLNode *temp;
     if(Root != NULL)
     {
         Traversal(Root->LeftChild);  // print left subtree
         cout << "(" << Root->Name << ", "; // print this node
         if(Root->LeftChild == NULL)
             cout << "NULL, ";
         else
         {
             temp = Root->LeftChild;
             cout << temp->Name << ", ";
         }
         if(Root->RightChild == NULL)
             cout << "NULL, ";
         else
         {
             temp = Root->RightChild;
             cout << temp->Name << ", ";
         }
         int temp1 = (FindBalance(Root->RightChild) - FindBalance(Root->LeftChild));
         cout << temp1 << ")" << endl;
        Traversal(Root->RightChild); // print right subtree
     }
     return;
 }
};


 int main()
 {
     ifstream CheckFile; //ifstream checks for file existence
 	char inputFileName[]="file.txt";
	CheckFile.open(inputFileName); //attempts to open read file, and tests for existence
     if(!CheckFile)
        {
           cout << "Input file does not exist." << endl;
	   return 1;
	}
 	else
 		cout <<"file opend"<<endl;
      AVL a;
     a.InputData(CheckFile);
     cout << "taversal:\n\n";
    a.Traversal(a.GetRootNode());
return 0;
}

