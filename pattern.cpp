#include<iostream>
using namespace std;
class Pattern
{
  public:
 void print()
   {
     for(int i=1;i<=5;i++)
      {
        for(int j=1;j<=i;j++)
         {
           cout<<'#';
         }
       cout<<endl;
      }
   }
 void print(char symb)
   {
     for(int i=1;i<=5;i++)
      {
        for(int j=1;j<=i;j++)
         {
           cout<<symb;
         }
       cout<<endl;
      }
   }
 void print(char symb, int n)
   {
     for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=i;j++)
         {
           cout<<symb;
         }
       cout<<endl;
      }
   }
 };
 int main()
  {
    Pattern prn;
    prn.print();
    prn.print(4);
    prn.print('*',7);
    return 0;
  }