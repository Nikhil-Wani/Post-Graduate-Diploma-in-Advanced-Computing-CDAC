#include<stdio.h>
int main()
{
	int arr[20],n,i,j;
	 printf("\n Enter no of subjects:");
	 scanf("%d",&n);
	 for(i =0;i<n;i++)
	 {
		 scanf("%d",&arr[i]);
	 }

	 for(i =0;i<n;i++)
	 {
	 	for(j =0;j<n;j++)
	 	{
			if(arr[i]<arr[j])
			{
			int temp=0;
			temp = arr[i];
			arr[i]= arr[j];
			arr[j]=temp;
			}
	 	}
	 }
	 printf("\n values after sorting:");
	 for(i =0;i<n;i++)
	 {
		 printf("\n%d",arr[i]);
	 }
	 return 0;
}
