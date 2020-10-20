#include<stdio.h>
int main()
{

	char (*p)[10];

	char arr[10]={'a','b','c','d','\0'};

	p=&arr;
	
	printf("\n ADD=%u",p);
	printf("\n %s",p);
	
	p++;
	printf("\n ADD=%u",p);


	return 0;
}
