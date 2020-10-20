#include<stdio.h>
int global=1;
void swap(int p,int k)
{
	static int count;
	count++;
	printf("\n Count= %d",count);
	int temp;
	temp= p;
	p= k;
	k= temp;
}
/*
void swap(int *p,int*k)
{
	int temp;
	temp= *p;
	*p= *k;
	*k= temp;
}
*/
int main()
{
	int a=20;
	int b=40;
	printf("\n Value of a=%d \n Value of b=%d ",a,b);
	swap(a,b);
	printf("\n Value of a=%d \n Value of b=%d ",a,b);
	return 0;
}
