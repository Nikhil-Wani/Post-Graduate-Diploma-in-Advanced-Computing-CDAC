#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Inventory
{
	public:
		char name[10];
		int code;
		float cost;
		void getdata()
		{
			cout<<"Enter the Item Name: ";
			cin>>name;
			cout<<"Enter the Item Code: ";
			cin>>code;
			cout<<"Enter the Item Cost: ";
			cin>>cost;
		}
		void putdata()
		{
			cout<<name;
			cout<<code;
			cout<<cost;
			cout<<endl;
		}
};

int main()
{
	Inventory item,temp_Item;
	int choice;
	fstream inoutfile;
	inoutfile.open("Stock.txt",ios::ate|ios::in|ios::out|ios::binary);
	inoutfile.seekg(0);
	do
	{
		item.getdata();
		inoutfile.write((char *)&item,sizeof item);
		cout<<endl<<"More [ 1 for Yes | 0 for No ] :- ";
		cin>>choice;
	}
	while(choice);
	inoutfile.clear();
	char ch;
	cin.get(ch);
	inoutfile.seekg(0);
	cout<<endl<<"The Contents of the file are: "<<endl;
	while(inoutfile.read((char *)&item,sizeof item))
	{
		item.putdata();
	}
	int itemLength,itemCount,fileSize,tmpBig,tmpSmall;
	itemLength=sizeof(item);
	fileSize=inoutfile.tellg();
	itemCount=fileSize/itemLength;
	inoutfile.clear();
	inoutfile.seekg(0);
	int count=1,change=0,change_cnt=0;
	while(inoutfile.read((char *)&item,sizeof item))
	{
		temp_Item=item;
		tmpSmall= ((int)inoutfile.tellp()) - sizeof(item);
		while(inoutfile.read((char *)&item,sizeof item))
		{
			if(strcmp(temp_Item.name,item.name)>0)
			{
				tmpBig= ((int)inoutfile.tellp()) - sizeof(item);
				inoutfile.seekp(tmpSmall);
				inoutfile.write((char *)&item,sizeof item);
				inoutfile.seekp(tmpBig);
				inoutfile.write((char *)&temp_Item,sizeof temp_Item);
				tmpSmall=tmpBig;
				change=1;
			}
		}
		inoutfile.clear();
		if(count==itemCount)
			break;
		if(change==1)
		{
			change=0;
			if(change_cnt>0)
				inoutfile.seekg(change_cnt*sizeof(item));
			else
				inoutfile.seekg(0);
		}
		else
			inoutfile.seekg((++change_cnt)*sizeof(item));
		count++;
	}
	inoutfile.clear();
	inoutfile.seekg(0);
	cout<<"\nThe Sorted Records are: \n";
	while(inoutfile.read((char *)&item,sizeof item))
		item.putdata();
	inoutfile.close();
	return 0;
}
