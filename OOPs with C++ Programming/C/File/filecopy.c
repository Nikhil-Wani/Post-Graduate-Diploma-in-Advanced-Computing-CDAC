#include<stdio.h>
#include<stdlib.h>
typedef struct Complex
{
	int i;
	int j;
}Complex;
int main()
{
	Complex c;
	c.i=10;
	c.j=20;
	
	FILE *fp =NULL;
	fp = fopen("xyz.txt","wb+");
	if(fp== NULL)
	{
	printf("\n File not found");
	}
	else
	{
	  //fprintf(fp,"%d%d",c.i,c.j);
	   fwrite(&c,sizeof(c),1,fp);
	}

        fcloseall();
	return 0;
}
