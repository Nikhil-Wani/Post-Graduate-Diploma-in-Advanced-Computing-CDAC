#ifndef __DARRAY__H__
#define __DARRAY__H__
#include<iostream>
using namespace std;
class DArray
{
private:
	int *p;
	int size;
public:
	DArray(int s);
	DArray(DArray& x);
	int& operator[](int index);
	// void SetAtIndex(int index,int value);
	// int GetAtIndex(int index);
	~DArray();
};
#endif
 