#include<stdio.h>
int main()
{
	 int n=0;
	 printf("Enter any number:");
	 scanf("%d",&n);
	 int i;
	 for(i=1;i<n;i=i+1)
	 {
		if(i%2 ==0)
		{		
	 	printf("\n%d\n",i);
		}
	 }
	return 0;
}
