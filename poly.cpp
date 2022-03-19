#include<iostream>
using namespace std;
class shape
{
  float ar;
  public:
  void Area(float r)
   {
     ar=3.14*r*r;
   }
  void Area(float l, float b)
   {
     ar=l*b;
   }
  void show()
   {
     cout<<"The area is "<<ar;
   }
};
int main()
{
	shape sh;
	sh.Area(10);
	sh.show();
	return 0;
}