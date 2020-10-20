#include<iostream>
using namespace std;
int main()
{ int  *ip  = NULL;
  int i = 650000;
  ip = &i;
  char *pc = reinterpret_cast<char*>(ip);
  cout<<"\n"<<*pc;
  return 0;
}