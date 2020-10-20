#include<stdio.h>
int main()
{
	
	char* s[5]={"sachin","saurav","virat","manoj","Kapil"};
	int i=0;
	for(i=0;i<5;i++)
	{
	printf("\n %s",s[i]);
	}

	for(i=0;i<5;i++)
	{
	s[i]="DDDD";
	}
	
	for(i=0;i<5;i++)
	{
	printf("\n %s",s[i]);
	}
	printf("\n%d",s[0][6]);
	return 0;
}
