#include<stdio.h>
#include<string.h>
int main()
{
	char name[50], myname[20];

	printf("\n Enter your name:=");
	scanf("%s",name);
	printf("\n Name is= %s\n",name);
	
	strcpy(myname,name);
	printf("\n Name is= %s\n",myname);
	if(0==strcmp(myname,name))
	{
		printf("\n string are equal");
	}
	return 0;
}
