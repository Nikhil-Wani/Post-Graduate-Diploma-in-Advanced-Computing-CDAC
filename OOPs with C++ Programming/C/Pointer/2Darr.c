#include<stdio.h>
#include<stdlib.h>

int main()
{
int r=2,c=2,i=0,j=0;
int **p = NULL;
//Allocation
p = (int**)malloc(r* sizeof(int*));
for(i=0;i<r;i++)
{
p[i] = (int*) malloc(c*sizeof(int));
}

//Allocation End
		
//Reading values from user
printf("\n Enter 4 values\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",(*(p+i)+j));
	}
}

//Shoing array elements on console
printf("\n Displaying values");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("\t%d",*(*(p+i)+j));
	}
}
//Deallocation starts	
for(i=0;i<r;i++)
{
free(p[i]);
}
free(p);
//Deallocation End
return 0;
}
