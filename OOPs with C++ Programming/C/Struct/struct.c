#include<stdio.h>
#include<string.h>
typedef struct Item
{
	int ino;
	char iname[50];
	float iprice;
}Item;

int main()
{
	Item i;
Item *ptr= &i;

ptr->ino =10;
strcpy(ptr->iname,"pen");
ptr->iprice= 20.00;
printf("\n NO  is %d ",ptr->ino);
printf("\n Name is %s ",ptr->iname);
printf("\n Price is %f ",ptr->iprice);
	
	/*Item arr[3]={1,"Pen",20.0,2,"Reg",30.00,3,"Marker",40.00};
	int i;
	for(i=0;i<3;i++)
	{
	printf("\n Item NO: %d",arr[i].ino);
	printf("\n Item Name: %s",arr[i].iname);
	printf("\n Item NO: %f",arr[i].iprice);
	}
*/
	return 0;
}

