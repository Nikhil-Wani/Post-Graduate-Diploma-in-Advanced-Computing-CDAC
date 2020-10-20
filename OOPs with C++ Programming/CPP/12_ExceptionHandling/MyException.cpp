#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

class MyException:public runtime_error
{
 string strMessage;

public:
MyException(string x):runtime_error(x),strMessage(x)
{
}

string what()
{
return strMessage;
}
~MyException()throw()
{
}
};


float  divide(int a,int b) throw(MyException)
{
if(b==0)
{
throw MyException("Divide by Zero error");
}


return (float)a/b;

}
int main()
{

try
{
float a= divide(5,0);

}
catch(MyException e)
{
cout<<e.what();
}

return 0;
}
