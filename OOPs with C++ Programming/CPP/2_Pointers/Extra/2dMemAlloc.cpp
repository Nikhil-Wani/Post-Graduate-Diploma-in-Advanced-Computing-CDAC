#include<iostream>
using namespace std;
int main()
{
	int r=5,c=5;
	int **p = NULL;
	//Allocation
	p = new int*[r];
	int i=0;
	for(i=0;i<r;i++)
	{
		p[i] = new int[c];

	}
	//Allocation End
	
	//Deallocation starts	
	for(i=0;i<r;i++)
	{
	delete	[]p[i];
	}
	delete p;
	//Deallocation End


	return 0;
}
