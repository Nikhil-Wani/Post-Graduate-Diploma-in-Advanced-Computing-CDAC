#include<iostream>
using namespace std;
void PrintChars(char* p)
{ for(int i =0; p[i] !='\0'; i++)
	{ cout<<"\n"<<p[i]; //*(p+i)
	}
}
int main(){
char arr[10] = "Sidhhi";
 PrintChars(arr);
 return 0;
}
