#include<iostream>
namespace One
{
class Sample
	{
		public:
		void Who()
		{
		cout<<"\n One::Sample"<<endl;
		}
	};
};

namespace Two
{
 
	class Sample
	{
		public:
		void Who()
		{
		cout<<"\n Two::Sample"<<endl;
		}
	};
};



int main()
{
using namespace One;
Sample s1;
s1.Who();

using namespace Two;
Sample s2;
s2.Who();

return 0;
}