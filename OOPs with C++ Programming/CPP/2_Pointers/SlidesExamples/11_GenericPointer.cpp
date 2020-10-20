#include<iostream>
using namespace std;
int main()
	{ int k=10;
	 int *ip = &k;
	void *vp = ip; // No casting required for generic  pointer
	//cout<<*vp; // Error in dereferencing
	return 0;
	}
