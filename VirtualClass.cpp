#include<iostream>
using namespace std;
class A
{
	public:
		virtual void print()
		{
			cout<<"Jamia Millia Islamia"<<endl;
		}
};

class B:public A
{
	void print()
	{
		cout<<"University of Delhi"<<endl;
	}
};

void f(A&r)
{
	r.print();
}
int main ()
{
	A obj1;
	B obj2;
	f(obj1);
	f(obj2);
	return 0;
}
