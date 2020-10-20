#include<iostream>
using namespace std;
class Complex{
 private: 
 int i;
 int j;
 public:
 void Accept(){
cout<<"Enter real & img part"<<endl;
cin>>i>>j;
 }
void Display(){
	cout<<"I="<<i<<"\nJ="<<j;
	}
};
int main(){
 Complex c1;
 c1.Accept();
 c1.Display();
 return 0;
}
