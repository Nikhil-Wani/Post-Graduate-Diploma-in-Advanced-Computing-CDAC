#include<stdio.h>
int main(){
const int k=10;
int* p =(int*)&k;
*p=100;
printf("\n%d",*p); // will print 100
printf("\n%d",k); // will print 100
return 0;
}
