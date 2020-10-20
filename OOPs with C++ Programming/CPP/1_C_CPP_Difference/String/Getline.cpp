#include <iostream>
#include <string>
using namespace std;

int main () {
  string str;
  cout << "Please enter full name: ";
  getline (cin,str);
  cout << "Thank you, " << str << ".\n";
}
