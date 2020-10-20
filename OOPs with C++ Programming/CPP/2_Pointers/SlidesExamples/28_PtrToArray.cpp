#include<iostream>
using namespace std;
int main(){
	char arr[3][10] ={"Bebo","Piggy","Deeps"};
	char (*parr)[10] =&arr[0];  // parr is ptr to char array of size 5
	cout<<*parr<<endl; // will print Bebo
	parr = parr +2;  // Will increment by two array
	cout<<*parr<<endl;  // Will print Deeps
	return 0;}
