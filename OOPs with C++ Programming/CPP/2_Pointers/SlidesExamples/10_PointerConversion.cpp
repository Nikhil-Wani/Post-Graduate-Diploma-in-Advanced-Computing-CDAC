#include<iostream>
using namespace std;
int main()
	{ int k = 65;
	 int *ip = &k;
	char *cp =(char*) ip;  // Error without type cast
	cout<<*cp;
	return true;
	}
