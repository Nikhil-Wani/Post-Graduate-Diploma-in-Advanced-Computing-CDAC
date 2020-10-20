#include<iostream>
using namespace std;
void PrintArray(int* p ,int size)
{ for(int i =0; i< size; i++)
	{ cout<<"\n"<<p[i]; //*(p+i)
	}
}
int main(){
 int arr[5] ={1,2,3};
 PrintArray(arr,3);
 return 0;
}
