#include<stdio.h>
int main()
{

	int a=20,b=30;
	int res =0;
	res = add(a,b);
	printf("\n Ans is %d",res);
	return 0;

}
int add(int d,int e)
{
	int result = 0;
	result = d+e;
	return result;
}
