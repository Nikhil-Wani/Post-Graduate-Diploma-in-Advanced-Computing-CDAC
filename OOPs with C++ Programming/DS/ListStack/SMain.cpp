#include"ListStack.cpp"
#include<cstdlib>
#include<stdexcept>
using namespace std;

int main()
{

	ListStack<int> objStack;
	int iChoice =0;

	do
	{
		cout<<"\n ******Menu******* :";
		cout<<"\n 1. Push.";
		cout<<"\n 2. Pop.";
		cout<<"\n 3. Exit.";
	
		cout<<"\n\n Enter your choice:";
		cin>>iChoice;

		switch(iChoice)
		{
		case 1:
			{
			
			try
			{
			 int no;
			 cout<<"\n Enter NO:";
			 cin>>no;
			 objStack.Push(no);
			 
		   	 cout<<"\n Element pushed successfully"<<endl;
			}
			catch(runtime_error e)
			{
			 	 cout<<"\n Push failed";
				 cout<<"Reason::"<<e.what();
			}
			}break;

		case 2:
			{
			try
			{
			 int no;
			 no = objStack.Pop()			 ;
			 cout<<"\n Popped element :"<<no;
			}
			catch(runtime_error e)
			{
			cout<<"\n Pop Failed"<<endl;
			cout<<"Reason::"<<e.what();
			}
			}break;
		
		}
	}while(3 != iChoice);
	return 0;
}
