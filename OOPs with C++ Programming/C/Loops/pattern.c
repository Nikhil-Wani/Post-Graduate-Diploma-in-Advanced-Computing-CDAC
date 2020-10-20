#include<stdio.h>
int main()
{
	 int n=0;
	 printf("Enter any number:");
	 scanf("%d",&n);
	 int i,j;
	 for(i=1;i<=n;i++)
	 {
		printf("\n");
	 	for(j=1;j<=i;j++)
	 	{	
	 	printf("*");
		}
	 }
	 printf("\n");
	return 0;
}
