#include<stdio.h>
int main()
{

	int a;
	printf("\n Enter any number between 0 to 9:=");
	scanf("%d",&a);
	switch(a) 
   	{
	case 0: printf("\n zero\n");break;

	case 1: printf("\n One\n"); break;

	case 2: printf("\n Two\n");break; 

	case 3: printf("\n Three\n"); break;

	case 4: printf("\n Four\n"); break;

	case 5: printf("\n Five\n"); break;

	case 6: printf("\n Six\n"); break;

	case 7: printf("\n Seven\n"); break;
	
	case 8: printf("\n Eight\n");break;

	case 9: printf("\n Nine\n");break;
		
	default: printf("\n No matach found \n");
	}
	return 0;
}
