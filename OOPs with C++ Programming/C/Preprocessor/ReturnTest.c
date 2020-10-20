#include<stdio.h>
int PrintGender(char gender,int h );
int main()
{

int code = PrintGender('K',10);
printf("\nCode = %d\n",code);
printf("ASCII=%d\n",'K');

return 0;
}

int PrintGender(char gender,int h )
{
switch(gender)
{
case 'M' : return 001; 
case 'F' : return 002;
case 'O' : return 003;
}
}
