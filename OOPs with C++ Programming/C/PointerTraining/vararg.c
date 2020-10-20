#include<stdio.h>
int main(int argc, char* argv[], char* env[])
{
int i=0;
for(i =0; i< argc; i++)
{
printf("\n %d\t%s",i,argv[i]);
}

printf("\n %d\t%s",0,env[0]);
printf("\n %d\t%s",1,env[1]);
printf("\n %d\t%s",2,env[2]);
printf("\n %d\t%s",3,env[3]);
printf("\n %d\t%s",4,env[4]);
printf("\n %d\t%s",5,env[5]);
return 0;
}
