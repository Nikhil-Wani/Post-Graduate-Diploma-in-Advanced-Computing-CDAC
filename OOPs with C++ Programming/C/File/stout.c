#include<stdio.h>
int main()
{
char name[80];
printf("\n Enter your name:\n");
fgets(name,80,stdin);
printf("\n Entered name is:");
fputs(name,stdout);
return 0;
}

