#include<stdio.h>

int main()
{
char buffer[100];
int a=10,b=20;
//printf directly use stdout stream for printing on standard console
printf("\n(printf) Addition of  %d and %d = %d",a,b,a+b);


//sprintf directly use buffer and save data on buffer and does not display it on screen
sprintf(buffer,"\n(sprintf) Addition of  %d and %d = %d",a,b,a+b);

//fprintf use said stream for output. User has choice to provide fout or stdout
fprintf(stdout,"\n(fprintf) Addition of  %d and %d = %d",a,b,a+b);

printf("\n Buffered data:%s\n",buffer);
return 0;
}
