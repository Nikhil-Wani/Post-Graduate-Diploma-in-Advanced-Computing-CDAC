#include<stdio.h>
typedef union datatype
{
	char c;
	int i;
	float f;
}DATATYPE;

int main()
{
	DATATYPE d;
	d.f =20.90F;
	printf("\n%f",d.f);
	printf("\n%c",d.c);
	printf("\n%i",d.i);
	d.i=6;
	printf("\n%f",d.f);
	printf("\n%c",d.c);
	printf("\n%i",d.i);
	d.c ='A';
	printf("\n%f",d.f);
	printf("\n%c",d.c);
	printf("\n%i\n",d.i);
	return 0;
}
