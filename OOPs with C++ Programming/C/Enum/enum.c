#include<stdio.h>
#include<string.h>
#include "enum.h"

int main()
{
STUDENT s;
s.PRN =10;
strcpy(s.name,"praphul");
s.course = DAC;
printf("\n Studemt details");
printf("\n%d\n%s\n%d\n",s.PRN,s.name,s.course);

return 0;
}
