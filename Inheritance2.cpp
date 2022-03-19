#include<iostream>
using namespace std;
class circle
{
	float radius;
	public:
		circle(float r)
		{
			radius = r;
		}
		float getarea();
		float getperimeter();
};

float circle::getarea()
{
	return 3.14*radius*radius;
}
float circle::getperimeter()
{
	return 2*3.14*radius;
}
class cylinder:public circle
{
	float height;
	public:
		cylinder(float r,float h):circle (r)
		{
			height =h;
		}
		float getvolume()
		{
			return getarea()*height;
		}
		float sufacearea()
		{
			return getperimeter()*height; 
		}
		float tsa()
		{
			return getperimeter()*height+2*getarea();
		}
};
int main()
{
	float r,h;
	cout<<"Enter the Radius of Circle "<<endl;
	cin>>r;
	cout<<"Enter the height of Cylinder "<<endl;
	cin>>h;
	cylinder b(r,h);
	cout<<"Area of Circle is: "<<b.getarea()<<endl;
	cout<<"Perimeter of Circle is:  "<<b.getperimeter()<<endl;
	cout<<"Volume of cylinder is:  "<<b.getvolume()<<endl;
	cout<<"Surface Area of Cylinder is: "<<b.sufacearea()<<endl;
	cout<<"Total Surface Area of Cylinder is: "<<b.tsa()<<endl;
	return 0;
}
