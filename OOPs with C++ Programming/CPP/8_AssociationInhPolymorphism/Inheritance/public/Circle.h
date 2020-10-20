#include "Shape.h"

class Circle:public Shape
{
	private:
    int radius;
	public:
	void Accept();
	float CalcArea();
	float CalcPeri();
};
	
