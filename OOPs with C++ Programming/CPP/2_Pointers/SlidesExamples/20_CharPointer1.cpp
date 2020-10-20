#include<iostream>
using namespace std;
int main(){
char c='A';
char *cp = &c;
cout<<*cp; //Prints A
return 0;
}
