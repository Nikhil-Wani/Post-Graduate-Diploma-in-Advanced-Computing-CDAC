#include<stdio.h>
#include<stdlib.h>

void fun(int** p1)
{
*p1 = (int*) malloc(sizeof(int));
**p1=20;
}

int main()
{

	int *p;
	fun(&p);
	printf("\n value=%d",*p);
	free(p);
	return 0;
}
