#include<iostream>
using namespace std;
int sum( int a, int b, int c = 0) {
 return a+b+c;
}
int sum( int a, int b =0, int c ) {
 return a+b+c;
} // This type of default arg is not permitted, WHY?

int main(){
 cout<<"\n"<<sum(10,20,30);
 cout<<"\n"<<sum(10,20);
// Default arg becomes optional
 return 0;
}
