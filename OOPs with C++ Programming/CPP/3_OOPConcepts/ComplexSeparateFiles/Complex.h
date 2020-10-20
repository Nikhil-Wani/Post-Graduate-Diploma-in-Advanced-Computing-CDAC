#include<iostream>
using namespace std;
class Complex
{
	private:
		static int Count;
		int i;
		int j;

	public:
		Complex(int i=0,int p=0);
		void Accept();
		void Display()const;
        int GetValueI()const;
		void SetValueI(int);
		static int GetCount();
		Complex Add(const Complex&);
};
