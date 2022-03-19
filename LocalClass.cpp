
#include<iostream>
using namespace std;
void fn1()
{
  class lc
   {
     public:
     void display()
      {
        int n1,n2;
        cout<<"Enter two numbers\n";
        cin>>n1>>n2;
        cout<<"sum of given numbers = "<<n1+n2<<endl;
      }
    };
     lc ob;
     ob.display();
  }
int main()
 {
   fn1();
   return 0;
 }