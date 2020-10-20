#include<iostream>
using namespace std;
int main(){
const int &r = 12;
int k =10;
const int &r1=k;
//r++; //Will generate error
//r1++; //Will generate error
cout<<"\n"<<r;
cout<<"\n"<<r1;
return 0;
}
