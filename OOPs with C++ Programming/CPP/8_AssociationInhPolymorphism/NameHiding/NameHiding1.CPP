 #include <string>
#include <iostream>
using namespace std;

class Base
 {
public:
  void function(void) const 
  { 
     cout << "Base::function(void)"; 
   }
  void function(string) const 
  {
	 cout << "Base::function (string)"; 
  }

};

class Derived : public Base 
{
public:
    void function(int) const
  {
	  cout << "Derived::function(int)"; 
  }
};
/*int main() 
{
  string s("hello");
  Derived d;
  d.function(s);
  return 0;
}
*/