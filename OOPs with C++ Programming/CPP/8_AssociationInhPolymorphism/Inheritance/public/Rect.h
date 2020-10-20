#include "Shape.h"

class Rect:public Shape
{
	private:
    int breadth;
    int length;
	public:
		void Display();
        void Accept();
		float CalcArea();
		float CalcPeri();
};
	
