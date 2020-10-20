#include<iostream>
using namespace std;
class Complex{
	private: 
	int i,j;
	static  int count;
	public:
Complex():i(10),j(20) {
	count++; }
	
static int GetCount(){
	//i = i+1; // error
	return count; 
} };

int Complex::count = 0;
//Init outside class(REQUIRED)
int main(){
	Complex c1,c2;
	int n = Complex::GetCount();
	cout<<"\n Count="<<n;
return 0;}


