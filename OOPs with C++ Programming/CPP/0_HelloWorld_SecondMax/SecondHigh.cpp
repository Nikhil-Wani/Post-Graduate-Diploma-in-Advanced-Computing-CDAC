
#include<iostream>
using namespace std;
 int main()
 {

	 const int size =10;

	 int arr[size]={2,3,0,4,5,7,6,1,9,8};

	 int max =arr[0],secondmax=arr[0];
 	 int i;
	 for( i=0;i<size;i++)
	 {
		 if(arr[i]>max)
		 {
			 secondmax = max;
			 max=arr[i];
		 }else if(arr[i]>secondmax)
		 {
			 secondmax =arr[i];
		 }


	 }

	 cout<<"\n Max= "<<max;

	 cout<<"\n Second Max= "<<secondmax;
	 return 0;
 }
