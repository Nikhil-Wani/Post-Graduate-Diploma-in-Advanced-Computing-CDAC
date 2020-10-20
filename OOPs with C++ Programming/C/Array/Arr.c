#define SIZE 4
#include<stdio.h>
int main()
{
int arr[][SIZE]={1,2,3};
int i,j;

printf("\nAddress of Array %u",&arr);
printf("\nAddress of Array %u",arr);
printf("\nAddress of Array %u",&arr[0][0]);

printf("\n Enter 16 elements");
for(i=0;i<SIZE;i++)
{
for(j=0;j<SIZE;j++)
{
scanf("%d",&arr[i][j]);
}
}


printf("\n Output\n");
for(i=0;i<SIZE;i++)
{
for(j=0;j<SIZE;j++)
{
printf("\t%d",arr[i][j]);
}
}
return 0;
}
