#include<stdio.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("abc.txt","w");
	if(fp != NULL)
	{
		printf("\n File Created");
	}
	return 0;
}