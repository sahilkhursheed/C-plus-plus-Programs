#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream of;
	of.open("Greeting.dat");
	char str[]="Wishing You a very Happy Birthday ";
	if(!of)
	{
		cout<<"File Not Found\n";
		exit(0);
	}
	else
	of<<str;
	of.close();
	ifstream i;
	i.open("Greeting.dat");
	char ch;
	while(!i.eof())
	{
		i.get(ch);
		cout<<ch;
	}
	i.close();
	return 0;
}
