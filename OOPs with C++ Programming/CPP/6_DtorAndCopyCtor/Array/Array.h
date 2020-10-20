#include<iostream>
using namespace std;
class Array
{
	private:
		int *p;
		int size;
	
	public:
	
		Array( int size);
	
		Array(const Array & x);
	
		int& operator[](int index);
		
		const Array& operator=(const Array &obj);

		void Display();
	
		~Array();
};

