#include<stdio.h>
#include<conio.h>

void PrintWord(long,char[]);
char *one[]={" "," one"," two"," three"," four"," five"," six"," seven","eight"," nine"," ten"," eleven"," twelve"," thirteen"," fourteen","fifteen"," sixteen"," seventeen"," eighteen"," nineteen"};
char *ten[]={" "," "," twenty"," thirty"," forty"," fifty"," sixty","seventy"," eighty"," ninety"};


/*void main()
{
 long n;
  printf("Enter any 9 digit no: ");
 scanf("%9ld",&n);
 if(n<=0)
                printf("Enter numbers greater than 0");
 else
 {
                  PrintWord((n/10000000),"crore");
                  PrintWord(((n/100000)%100),"lakh");
                  PrintWord(((n/1000)%100),"thousand");
                  PrintWord(((n/100)%10),"hundred");
                  PrintWord((n%100)," ");
 }
 getch();
}


void PrintWord(long n,char ch[])
{
 (n>19)?printf("%s %s ",ten[n/10],one[n%10]):printf("%s ",one[n]);
 if(n)printf("%s ",ch);
}
*/