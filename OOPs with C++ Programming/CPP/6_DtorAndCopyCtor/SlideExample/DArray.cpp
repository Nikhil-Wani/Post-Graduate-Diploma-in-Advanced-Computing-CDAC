#include "DArray.h"
#include<stdexcept>
DArray::DArray(int s):size(s)
{
 p = new int[size];
}

DArray::DArray(DArray& x)
{
 size = x.size;
 p = new int[size];
 for(int i = 0;i < size; i++)
 {
 p[i] = x.p[i];
 }
}

int& DArray::operator[](int index)
{
if( index < 0 || index > size -1)
{
throw runtime_error("Array out of bounds");
}
return p[index];
}

// void DArray::SetAtIndex(int index, int value)
// {
  // p[index]= value;
// }

// int DArray::GetAtIndex(int index)
// {
  // return p[index];
// }
DArray::~DArray()
{
delete []p;
}
