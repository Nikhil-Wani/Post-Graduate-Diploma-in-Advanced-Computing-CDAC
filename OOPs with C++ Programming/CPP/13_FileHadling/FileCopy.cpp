#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main(int argc, char *argv[])
{	
	
	if(argc < 3)
	{

	cout<<"\n Please provide dest file name and src file name"<<endl;
	return -1;
	}
	
	ifstream fin(argv[1]);
	ofstream fout(argv[2]);
		        
	if(!fin)
	{
	cout<<"\n Enable to open file in read mode"<<endl;
	return -1;
	}

	if(!fout)
	{
	cout<<"\n Enable to open file in write mode"<<endl;
	return -1;
	}
  
  
  
//file copy
 //  string str;
   char ch;   
   while(fin)
     {

	//Using string
        /* getline(fin,str);
         fout<<str;
       */
	//Using character
	 fin.get(ch);
	fout<<ch;
     
     }

    fout.close();
    fin.close();

    return 0;
}      

