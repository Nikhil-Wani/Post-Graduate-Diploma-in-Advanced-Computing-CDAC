#include<stdio.h>
int main()
{
	void *p = NULL;
	int *k= NULL;
	char *s= NULL;
	int i= 35555;
	p= &i;
	s =(char*) p;
	printf("\n Value of I is= %d",*s);
	return 0;
}
