#include<iostream>
using namespace std;

class Matrix
{

int r,c;
int **p;

public:
Matrix(int a,int b):r(a),c(b)
{
	p= new int*[r];
	for(int i=0;i<r;i++)
	{
	p[i]= new int[c];
	}
}
int* operator [](int index)
{
	if((index >= 0) && (index < r))
	{
		return p[index];
	}
}

int&  operator [](int index) const
{
	if((index >= 0) && (index < c))
	{
		return *p[index];
	}
}


/*void Display()
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<p[i][j];
		}
	}
}
*/

~Matrix()
{

	for(int i=0;i<r;i++)
	{
	delete []p[i];
	}
	delete []p;
}
};


int main()
{
int r,c;
cout<<"\nEnter size of matrix(rows and coloumns):";
cin>>r>>c;
Matrix m(r,c);

cout<<"\n Printing matrix without user Values:\n";

	for(int i=0;i<r;i++)
	{
		cout<<"\n";
		for(int j=0;j<c;j++)
		{
		cout<<"\t"<<m[i][j];
		}
	}

cout<<"\n Enter Matrix elements\n";

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		cin>>m[i][j];
		}
	}

cout<<"\n Printing matrix with user  Values\n";
	for(int i=0;i<r;i++)
	{
		cout<<"\n";
		for(int j=0;j<c;j++)
		{
		cout<<"\t"<<m[i][j];
		}
	}
cout<<"\n";


return 0;
}
