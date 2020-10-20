#include<iostream>
using namespace std;
class Sample{
	private:
	int arr[3];
	public:   
	// Sample(): arr[0](0)
	 // { }  // Error at above line
	Sample(){   // Array D.M init in ctor
	for(int i=0;i<3; i++){
	cout<<"\n In loop"<<endl;
		arr[i] =i;	
	}}//Array D.M init is not possible with ctor with init list

	void Display()	{
	cout<<"\n Entered in display"<<endl;
		for(int i=0;i<3; i++){
		cout<<arr[i];	}
		}
};
int main()
{ 	Sample s;
	s.Display();
	return 0;
}	
