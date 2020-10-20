#include"Array.h"

int main()
{
	Array a(2);
	a[0]=10;
	a[1]=20;
	a.Display();
	{
        Array b=a;
	   b.Display();
	}
	a.Display();
	return 0;
}
