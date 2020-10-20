#include<stdio.h>
#include<stdlib.h>
int main()
{
	 int no1,no2;
	 int result=0;
	 char ch;
	 do
	 {
	 
	 printf("\n + for Add") ;
	 printf("\n - for Sub") ;
	 printf("\n * for Mult") ;
	 printf("\n / for Div") ;
	 printf("\n 0 for exit") ;
	 
	 printf("Enter your choice:");
	 scanf("%c",&ch);
	 switch(ch)
	 {
 		case '+' :
		        	{
					printf("\n Enter First no");
					scanf("%d",&no1);
					printf("\n Enter Secondt no");
					scanf("%d",&no2);
					result = no1+ no2;
	 				printf("\n Result =%d",result);
				};break;
		case '0' : exit(0);
	 }
	 }
	 while(ch !='0');
	 return 0;
}
