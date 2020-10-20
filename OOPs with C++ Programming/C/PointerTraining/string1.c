#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char * str = (char*)malloc(10*sizeof(char));
str = "Let us understand pointer";
//str = 2+str++;
str = str+'A';
printf("\n%s",str);
return 0;
}

