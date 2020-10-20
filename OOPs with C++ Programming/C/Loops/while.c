#include<stdio.h>
 int main()
{
	 int n=0;
	 int fact=1;
	 printf("Enter any number:");
	 scanf("%d",&n);

	 while(n!=0)
	 {
		 fact= fact*n;
		 n= n-1;
	 }

	 printf("Fact=%d\n",fact);
	return 0;
}
