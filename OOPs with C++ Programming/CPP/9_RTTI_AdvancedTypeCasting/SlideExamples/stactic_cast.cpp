#include<iostream>
using namespace std;
int main()
{ long l = 100000;
  float f = 10.20F;
  int i = 10;
  l = static_cast<long>(i);
  f = static_cast<float>(i);
  i = static_cast<long>(l);
  cout<<"\n"<<i;
  cout<<"\n"<<f;
  return 0;
}