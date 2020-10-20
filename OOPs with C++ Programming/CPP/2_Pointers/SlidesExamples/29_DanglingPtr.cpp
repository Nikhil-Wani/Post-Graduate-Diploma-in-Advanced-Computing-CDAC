#include<iostream>
using namespace std;
int main(){
	int *p1 = new int;
	int *p2 = p1;
	*p2=100;
	cout<<*p1<<endl;
	delete p1;
	cout<<*p2<<endl; // Segmentation fault // p2 is dangling pointer
return 0;} //  p2 is trying to access  memory deleted by p1
