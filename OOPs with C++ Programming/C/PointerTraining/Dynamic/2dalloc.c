#include<stdio.h>
#include<stdlib.h>

int main()
{
int r,c;
int i,j;
int **p = NULL;
// Read input

printf("\n Enter first dimension:");
scanf("%d",&r);
printf("\n Enter second dimension:");
scanf("%d",&c);

p=(int**) malloc(r*sizeof(int*));

for(i=0;i<r;i++)
{
p[i] = (int*) malloc(c*sizeof(int));
}

printf("\n Enter %d elements :",r*c);
for(i =0;i<r;i++)
{
	for(j =0;j<c;j++)
	{
	scanf("%d",&p[i][j]);
	}

}

printf("\n Entered %d elements :",r*c);
for(i =0;i<r;i++)
{
	printf("\n");
	for(j =0;j<c;j++)
	{
	printf("\t%d",p[i][j]);
	}
}
printf("\n")
free(p);
 return 0;
}
