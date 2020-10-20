#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *s="praphul";
	int length=0;
	int i;

	 for(i=0;s[i] !='\0';i++);
        
	
	length=i;
	
	char *p= (char*) malloc(length* sizeof(char));
	strcpy(p,s);
	printf("\n Entered Name is %s",p);
	return 0;
}
