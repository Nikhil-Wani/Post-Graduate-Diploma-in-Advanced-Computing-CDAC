#include<stdio.h>
#include<stdlib.h>

int main()
{
int m,n,r,c;
int i,j,k,l;
int ****p = NULL;
// Read input


printf("\n Enter first dimension:");
scanf("%d",&m);
printf("\n Enter second dimension:");
scanf("%d",&n);
printf("\n Enter third dimension:");
scanf("%d",&r);
printf("\n Enter fourth dimension:");
scanf("%d",&c);

p=(int****) malloc(m*sizeof(int***));

for(i=0;i<m;i++)
{
p[i] = (int***) malloc(n*sizeof(int**));
}
for(i=0;i<m;i++)
{
	for(j=0; j<n; j++)
	{
	p[i][j] = (int**) malloc(r*sizeof(int*));
	}
}


for(i=0;i<m;i++)
{
	for(j=0; j< n;j++)
	{
		for(k=0; k< r; k++)
		{
		p[i][j][k] = (int*) malloc(c*sizeof(int));
		}
	}
}

printf("\n Enter %d elements :",m*n*r*c);
for(i =0;i<m;i++)
{
	for(j =0;j<n;j++)
	{
		for(k =0;k< r;k++)
		{	
			for(l =0;l< c;l++)
			{
			scanf("%d",&p[i][j][k][l]);
			}
		}
	}

}

printf("\n Entered %d elements :",m*n*r*c);
for(i =0;i<m;i++)
{
	for(j =0;j<n;j++)
	{
		for(k =0;k< r;k++)
		{	
			for(l =0;l< c;l++)
			{
	printf("\nElement@[%d]%d][%d][%d]= %d",i,j,k,l,p[i][j][k][l]);
			}
		}
	}

}

printf("\n");
for(i=0;i<m;i++)
{
	for(j=0; j< n;j++)
	{
		for(k=0; k< r; k++)
		{
		free(p[i][j][k]);;
		}
	}
}
for(i=0;i<m;i++)
{
	for(j=0; j< n;j++)
	{
	free(p[i][j]);
	}
}
for(i=0;i<m;i++)
{
free(p[i]);
}
free(p);
 return 0;
}
