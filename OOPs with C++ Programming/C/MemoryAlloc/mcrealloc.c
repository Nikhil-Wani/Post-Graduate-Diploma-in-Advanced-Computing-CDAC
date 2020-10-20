#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p1 = (int*)malloc(sizeof(int));
	if(p1!= NULL)
	{
		printf("\n Memory Allocated successfully using malloc");
	}
	int *p2 = (int*)calloc(10,sizeof(int));
	if(p2!= NULL)
	{
		printf("\n Memory Allocated successfully using calloc");
	}
	p1 = (int*)realloc(p1, 2*sizeof(int));
	if(p1!= NULL)
	{
		printf("\n Memory Allocated successfully using realloc");
	}
	free(p1);
	free(p2);
	return 0;
}
