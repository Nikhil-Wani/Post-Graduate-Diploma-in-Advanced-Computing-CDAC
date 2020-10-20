#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}
int main()
{
	int (*p)(int,int);
	p = add;
	int k = p(20,10);
	printf("\n value= %d",k);
	printf("\n Add Address =%u", p);

	p = sub;
	k = p(20,10);
	printf("\n value= %d",k);
	printf("\n sub address %d",p);
	return 0;
}
