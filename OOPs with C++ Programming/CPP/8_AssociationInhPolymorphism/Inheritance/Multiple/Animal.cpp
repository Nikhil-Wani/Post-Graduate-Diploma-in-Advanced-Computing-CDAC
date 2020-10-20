#include<iostream>
using namespace std;
class Animal
{
int weight;
public: 
	void SetWeight(int w)
	{
	weight = w;
	}
};

class Tiger : virtual public Animal
{
	int height;
	public: 
	void SetHeight(int h)
	{
	height = h;
	}
};

class Lion : virtual public Animal
{
	int length;
	public: 
	void Setlength(int l)
	{
	length = l;
	}
};


class Liger :  public Lion, public Tiger
{	
};
int main()
{
Liger lg;
lg.SetWeight(10);
return 0;
}