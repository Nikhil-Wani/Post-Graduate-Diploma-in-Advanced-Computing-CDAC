#include"Array.h"

Array::Array( int size)
	{
		this->size= size;
		p= new int[this->size];

	}


Array::Array( const Array & x)
	{
		this->size = x.size;
		this->p = new int[this->size];
		for(int i=0;i<size;i++)
		{
		 p[i]=x.p[i];

		}
	}

int& Array::operator[](int index)
	{
	 	if(index >=0 && index<size)
	 	{
			 return p[index];
	 	}
		else
		{
			static int  temp;
			return temp;
		}

	}

const Array& Array::operator=(const Array &obj)
	{
		// Handle Self Assignment
		if(this==&obj)
		{
 			return *this;
		}
		if(size !=obj.size)
		{
			delete []p;
			size=obj.size;
			p= new int[size];
		}

		for(int i=0;i<size; i++)
		{
			p[i]=obj.p[i];
		}
        	 return *this;
	}


void Array:: Display()
	{
		cout<<"\n Display Array contents:"<<endl;

		for(int i=0;i<size;i++)
		{
			cout<<"\t"<<p[i];
		}
	}


Array::~Array()
	{
	 delete []p;
	}


