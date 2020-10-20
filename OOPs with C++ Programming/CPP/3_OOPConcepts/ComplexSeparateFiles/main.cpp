#include"Complex.h"
int main()
{

	Complex c1(10,10),c2(20,20),c3;
	c3= c1.Add(c2);
	cout<<"\n value after addition"<<endl;
	c3.Display();
	 return 0;
}
