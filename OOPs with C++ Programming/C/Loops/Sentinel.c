#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch='a';
printf("\n Enter a character to proceed");
while(ch!= 'n')
{
printf("\n Entered char %c",ch);
printf("\n Enter char: ");
fflush(stdin);
scanf("%c",&ch);
getchar();
fflush(stdin);
}

return  0;
}
