#include<stdio.h>
void PrintBinary(int no)
{
int i=0;
int arr[50];
for(i=0; no !=0; i++)
{
arr[i] = no%2;
no = no/2;
}

i = i-1;

for( ;i>=0 ;i--)
{
printf("%d",arr[i]);
}
}

int main(void)
{
int no;
printf("\n Enter Number\n");
scanf("%d",&no);
printf("\n Binary Equivalent of %d =",no);
PrintBinary(no);
return 0;
}
