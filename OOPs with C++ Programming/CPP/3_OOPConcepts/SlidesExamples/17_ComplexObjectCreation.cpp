#include<iostream>
using namespace std;
class Complex{
 private: 
 int i;
 int j;
 public:
Complex() // Default ctor
{ i=0;
  j=0;
  cout<<"\n Default ctor"<<endl;
 }
//Parametrized ctor
Complex(int p, int k)
{ i=p;
  j=k; 
  cout<<"\n Param ctor"<<endl;
 }
 
void Accept(){
cout<<"\n Enter real &img part\n";	
cin>>i>>j;} 

void Display(){
	cout<<"\n"<<i<<" "<<j; } 
};
int main(){
 // Complex c1;
 // Complex c2(12,12);
//Complex c3 = c1; // Copy ctor


// Complex c4(c2);  //Copy ctor
 // Complex c5 = Complex(); //Copy ctor
// c5.Display();

Complex *cp = new Complex;
Complex *cp2 = new Complex(5,5);
(*cp).Display();  //Obj need . (dot)
cp2->Display(); //Ptr  need ->
return 0;}

