#include<iostream>
using namespace std;
class rectangle
{
	int length,breadth;
	public:
		rectangle(int l,int b)
		{
			length=l;
			breadth=b;
		}
		int getarea();
		int getperimeter();
};
int rectangle::getarea()
{
	return length*breadth;
}
int rectangle::getperimeter()
{
	return 2*(length+breadth);;
}
class box:public rectangle
{
	int height;
	public:
		box(int l,int b,int h):rectangle (l,b)
		{
			height =h;
		}
		int getvolume()
		{
			return getarea()*height;
		}
};

int main()
{
	int l,b,h;
	cout<<"Enter the length & breadth of rectangle "<<endl;
	cin>>l>>b;
	cout<<"Enter the height of box "<<endl;
	cin>>h;
	box c(l,b,h);
	cout<<"Area is: "<<c.getarea()<<endl;
	cout<<"Perimeter is:  "<<c.getperimeter()<<endl;
	cout<<"Volume is:  "<<c.getvolume()<<endl;
	return 0;
}
