#include<iostream>
using namespace std;
int main(){
 	int *p = new int[4]; // Allocation of memory for array
	for(int i =1; i<=4; i++){//  Loop for initializing array elements
	p[i]=i*10; }
	for(int i =1; i<=4; i++){ //  Loop for printing array elements
	cout<< p[i]<<endl; }
	delete []p;  // De-allocation of memory
	return 0;
}