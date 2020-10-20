#include<iostream>
using namespace std;

int main()
{
	int i =20;
	int j =10;
	cout<<"\n"<<i;
	int &k = i;
	cout<<"\n"<<k;
	k=k+1;
	cout<<"\n"<<i;
	k=j;
	cout<<"\n"<<i;
	k=&j;
	return 0;
}
