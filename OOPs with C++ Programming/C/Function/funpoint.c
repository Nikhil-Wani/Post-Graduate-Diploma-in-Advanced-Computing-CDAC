#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}

int substract(int a,int b)
{
	return a-b;
}
int main()
{
	int (*p)(int,int);
	p= add;
	int k = p(20,10);
	printf("\n value= %d",k);
	
	p= substract;
	 k = p(20,10);
	printf("\n value= %d",k);
	return 0;
}
