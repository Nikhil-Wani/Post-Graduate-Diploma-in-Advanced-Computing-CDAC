#include<iostream>
using namespace std;
class Complex{
 private: 
 int i;
 int j;
 public:
Complex() // Default ctor
{ i=0;
  j=0;}
//Parametrized ctor
Complex(int p, int k)
{ i=p;
  j=k; }
 
void Accept(){
cout<<"\n Enter real &img part\n";
cin>>i>>j;} 

void Display(){
	cout<<"\n"<<i<<" "<<j; } 
};
// int main(){
// Complex carr[3]; // Static array
// for(int i=0; i<3; i++){
	// carr[i].Accept(); 
// }
// for(int i=0; i<3; i++){
	// carr[i].Display();
// }
// return 0; }

int main(){
Complex *cp = new Complex[3];
for(int i=0; i<3; i++){
	cp[i].Accept(); 
} //cp[i] is object hence . opr
for(int i=0; i<3; i++){
	cp[i].Display();
}
delete []cp;
return 0; }



