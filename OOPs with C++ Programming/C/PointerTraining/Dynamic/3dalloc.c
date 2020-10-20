#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,r,c;
int i,j,k;
int ***p = NULL;
// Read input


printf("\n Enter first dimension:");
scanf("%d",&n);
printf("\n Enter second dimension:");
scanf("%d",&r);
printf("\n Enter third dimension:");
scanf("%d",&c);

p=(int***) malloc(n*sizeof(int**));

for(i=0;i<n;i++)
{
p[i] = (int**) malloc(r*sizeof(int*));
}


for(i=0;i<n;i++)
{
	for(j=0; j< r;j++)
	{
	p[i][j] = (int*) malloc(c*sizeof(int));
	}
}

printf("\n Enter %d elements :",n*r*c);
for(i =0;i<n;i++)
{
	for(j =0;j<r;j++)
	{
		for(k =0;k< c;k++)
		{
		scanf("%d",&p[i][j][k]);
		}
	}

}

printf("\n Entered %d elements :",n*r*c);
for(i =0;i<n;i++)
{
	for(j =0;j<r;j++)
	{
		for(k =0;k<c;k++)
		 {
			printf("\nElement@[%d]%d][%d]= %d",i,j,k,p[i][j][k]);
	         }
	}
}
printf("\n");
for(i=0;i<n;i++)
{
	for(j=0; j< r;j++)
	{
	free(p[i][j]);
	}
}
for(i=0;i<n;i++)
{
free(p[i]);
}
free(p);
 return 0;
}
