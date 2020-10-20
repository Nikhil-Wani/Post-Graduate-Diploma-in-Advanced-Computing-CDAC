#include<iostream>
using namespace std;

template <class T>
  class Joiner
  {
  public:
     T Combine(T x, T y)
        {return x + y;}
  };
int main()
{
Joiner<int> ij;
Joiner<float> cj;
cout<<"\n"<<ij.Combine(10,10);
cout<<"\n"<<cj.Combine(10.10,20.20);
return 0;
}
