
#include <string>
#include <iostream>
using namespace std;

class Base {
public:
  int f() const 
  { 
    cout << "Base::f()\n"; 
    return 1; 
  }
  int f(string) const 
  {
	 cout << "Base::f(string)\n"; 
	  return 1; 
  }
  void g() 
  {
  }
};

class Derived1 : public Base 
{
public:
  void g() const {}
};

class Derived2 : public Base 
{
public:
  // Redefinition:
  int f() const { 
    cout << "Derived2::f()\n"; 
    return 2;
  }
};

class Derived3 : public Base 
{
public:
  // Change return type:
  void f() const
  {
	  cout << "Derived3::f()\n"; 
  }
};

/
class Derived4 : public Base 
{
public:
  // Change argument list:
  int f(int) const 
  { 
    cout << "Derived4::f()\n"; 
    return 4; 
  }
};

int main() {
  string s("hello");
  Derived1 d1;
  int x = d1.f();
  d1.f(s);
  Derived2 d2;
  x = d2.f();
  Base *bp =&d2;
  bp->f(s);
//!  d2.f(s); // string version hidden
  Derived3 d3;
  d3.f(s);
//!  x = d3.f(); // return int version hidden
 Derived4 d4;
//!  x = d4.f(); // f() version hidden
  x = d4.f(1);
  return 0;
} ///:~


