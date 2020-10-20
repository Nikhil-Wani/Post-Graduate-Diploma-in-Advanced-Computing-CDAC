#include <iostream>
#include <string>
using namespace std;
class MBase
{
public:
virtual string vf() const = 0;
virtual ~MBase()
{}
};

class D1 : public MBase 
{
public:
string vf() const 
{
	return "D1"; 
}
};

class D2 : public MBase
{
public:
string  vf() const 
{
	return "D2";
}
};
// Causes error: ambiguous override of vf():
/* class MI : public D1, public D2
 {
 };*/
int main() 
{
MBase *arr[3];
D1 d1;
D2 d2;
//MI m1;
arr[0] =&d1;
arr[1]= &d2;
// Cannot upcast: which subobject?:
//arr[3] =&m1;
for(int i = 0; i < 2; i++)
cout << arr[i]->vf() << endl;
return 0;
}

