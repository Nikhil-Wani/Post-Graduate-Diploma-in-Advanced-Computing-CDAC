#include "Circle.h"
float Circle::CalcArea()
{
 float area = 3.14 *radius*radius;
 return area;
}

float Circle::CalcPeri()
{
 float peri = 2* 3.14 *radius;
 return peri;
}

void  Circle::Accept()
{
 cout<<"\n Enter radius"<<endl;
 cin>>radius;
}
