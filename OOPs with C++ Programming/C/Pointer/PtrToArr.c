#include<stdio.h>
#include<stdlib.h>

void fun(int arr[][2])
{
arr[1][1] = 20;
printf("\n%d",arr[1][1]);
}
int main()
{

 /*
//using ptr to array  
char names[2][40]={"Praphul","Shraddha"};
 char (*ptr)[40]= NULL;
 ptr =names;
printf("\n%s",ptr++);
printf("\n%s",ptr++);
*/
/*
 * using ptr to array and passing array
 int names[2][2]={1,2,3,4};
 int (*ptr)[2]= NULL;
 ptr =names;
printf("\n%d",ptr[1][1]);
fun(names);
printf("\n%d",ptr[1][1]);*/
 

/* function pointer
 int names[2][2]={1,2,3,4};
void (*ptr)(int arr[][2]);
 ///fun(names);
 ptr= fun;
ptr(names);
printf("\n %d",names[1][1]);*/

/*
 *Char ptr and increment
 * char name[20] = "praphul";
printf("\n%s",name);

char *pname = "praphul";
printf("\n%s",pname);
printf("\n%c",*pname++);
printf("\n%c",*pname++);
printf("\n%c",*pname++);
printf("\n%c",*pname++);
printf("\n%s",pname);*/

 int names[2][2]={1,2,3,4};
int **p = (int**)malloc(5*sizeof(int*));
int k=0;
for(k=0;k<5;k++) p[k]=(int*)malloc(5*sizeof(int));
p[4][4]= 20;
printf("\n%d",p[4][4]);
return 0;
}
