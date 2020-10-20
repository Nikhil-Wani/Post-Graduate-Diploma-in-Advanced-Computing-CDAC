#include<iostream>
using namespace std;
int main()
{ const int a=10;
  volatile int v = 20;
  int *sp = const_cast<int*>(&a);
  int *vp = const_cast<int*>(&v);
  cout<<"\n"<<*sp;
  cout<<"\n"<<vp;
  return 0;
}
