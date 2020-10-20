#include<iostream>
using namespace std;
int main(){
	int k=10;
	int* p = &k; 
	cout<<"\nAddress="<<p;  //8080
	cout<<"\nValue="<<*p;
	p = p+1; // p++;
	cout<<"\nAddress="<<p;  //8084
	return 0;
}
