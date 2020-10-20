#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespace std;

class Shape
{
	public:
		virtual void Accept() =0;
		virtual float CalcArea()=0;
		virtual float CalcPeri()=0;
		
};
#endif	
