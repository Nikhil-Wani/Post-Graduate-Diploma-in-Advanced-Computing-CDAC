#include<iostream>
using namespace std;
int main(){                              
	char* names[3];
	names[0] = "Priyanka";
	names[1] = "Deepika";
	names[2] = "Kareena";
	for(int i=0; i<3;i++)
	{ cout<<"\n"<< names[i];}
	return 0;
}
