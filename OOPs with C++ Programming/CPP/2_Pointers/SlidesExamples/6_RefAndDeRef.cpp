#include<iostream>
using namespace std;
int main(){
	int a =10;
	int *p =&a; // & before variable gives address
	cout<<p<<endl;
	cout<<&a<<endl;
	cout<<*p<<endl; // * before ptr gives value
	cout<<&p<<endl;
	return 0;
	}
