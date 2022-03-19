#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream of;
	of.open("Greeting.dat",ios::binary);
	char str[]="Wishing You A Very Happy Birthday ";
	if(!of)
	{
		cout<<"File Not Found\n";
		exit(0);
	}
	else
		of<<str;
	of.close();
	ifstream ifs;
	ifs.open("Greeting.dat",ios::binary);
	char ch;
	while(!ifs.eof())
	{
		ifs.get(ch);
		cout<<ch;
	}
	ifs.close();
	return 0;
}
