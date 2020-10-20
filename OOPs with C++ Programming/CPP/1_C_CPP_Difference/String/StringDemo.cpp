#include<iostream>
#include<string>
using namespace std;
int main()
{

string str1 = "ABC";
string str2("ABC");

//Getting input using cin directly
string src;
cout<<"Default Value of String:"<< src<<endl;
cout<<"Enter String"<<endl;
cin>>src;
cout<<"String is:"<<src<<endl;

//Getting input using getline
cout<<"Enter String"<<endl;
getline(cin,src);
cout<<"String is:"<<src<<endl;

//Finding size  & length of String
cout<<"Size:="<<sizeof(src)<<endl;
cout<<"Length:="<<src.length()<<endl;
cout<<"SIZE:="<<src.size()<<endl;


//Comparision of Address
if(str1 == str2)
{
cout<<"Strings are same"<<endl;
}

//Comparison of String contents
if( 0 == str1.compare(str2))
{
cout<<"Strings are Equal"<<endl;
}


//String Concatenation
str1 = str1 +str2;
str2 = str1 + "XYZ";
str2+=str1;
str1+="CPP";
cout<<"String after concat="<<str1<<endl;
cout<<"String after cincat="<<str2<<endl;

//Check for empty
string strcheck;
if(strcheck.empty())
{
cout<<"String is empty"<<endl;
}

//Clear string
str1.clear();
cout<<"After Clear:"<<str1<<endl;

return 0;
}
