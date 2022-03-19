#include<iostream>
#include<fstream>
#include<ctype.h>
#include<string.h>
using namespace std;

int main()
{
	/*ifstream f;
	char str[100],ch;
	int i=0,c=0;
	f.open("word.txt",ios::out);
	cout<<"Enter the text"<<endl;
	gets(str);
	f<<str<<endl;
	f.close();
	*/
	char w[500][50];
	int f[500];
	int nw = 0;
	ifstream fo;
	fo.open("word.txt");
	cout<<"Reading from the file"<<endl;
	char s[50];
	while(!fo.eof())
	{
		fo >> s;
		bool found = false;
	    for(int i = 0; i < nw; i++)
	    {
	    	if(strcmpi(w[i], s) == 0)
	    	{
	    		found = true;
	    		f[i]++;
	    		break;
			}
		}
		if(found == false)
		{
			strcpy(w[nw], s);
			f[nw] = 1;
			nw++;
		}
	}
	cout << "\nword\t\tFrequency\n";
	for(int i = 0; i < nw; i++)
	   cout << w[i] <<"\t"<< f[i] << "\n";
	fo.close();
	return 0;
}
