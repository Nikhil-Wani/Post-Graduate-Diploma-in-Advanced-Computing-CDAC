#include<iostream>
using namespace std;
void swap(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb =temp;
}
int main()
{ 
	int a= 10;
	int b= 20;
	swap(&a,&b);
	cout<<"\n a="<<a;
	cout<<"\n b="<<b;
	return 0;
}
