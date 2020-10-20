#include<stdio.h>
void sort( int a[],int n)
{
 int i=0,j=0;
 for(i=0;i<n;i++)
 {
	 for(j=0;j<n;j++)
	 {
	 if(a[i]<a[j])	 
	 {
		 int temp;
		 temp= a[i];
		 a[i]=a[j];
		 a[j]=temp;

	 }
	}

 }
	
}
int main()
{
	int arr[5]={1,4,3,3,5};
	int i;
	sort(arr,5);
	printf("\n Array elements:\n");
	 for(i=0;i<5;i++)
	 {
		 printf("\n %d",arr[i]);
	 }

	return 0;
}
