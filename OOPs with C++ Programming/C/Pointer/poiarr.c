#include<stdio.h>
int main()
{

	char (*p)[5];

	char arr[5]={'a','b','c','d'};
	p=&arr;
	printf("\n %s",p);
	

	return 0;
}
