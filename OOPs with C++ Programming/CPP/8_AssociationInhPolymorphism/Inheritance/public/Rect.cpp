#include "Rect.h"
float Rect::CalcArea()
{
  float area = breadth*length;
  return area;
}

float Rect::CalcPeri()
{
  float peri = 2* (breadth+length);
  return peri;
}

void Rect::Accept()
{
  cout<<"\n Enter Length"<<endl;
  cin>>length;
  cout<<"\n Enter Breadth"<<endl;
  cin>>breadth;
}

void Rect::Display()
{
  cout<<"\n Length:="<<length<<endl;
  cout<<"\n  Breadth :="<<breadth<<endl;
}
