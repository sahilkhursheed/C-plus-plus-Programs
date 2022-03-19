#include<iostream>
using namespace std;
class ov
{public:
 void test(int a,float b, char c)
{
cout<<a<<b<<c;
}
void test(int a,char c)
{
cout<<a<<c;
}
};
int main()
{
ov ob;
ob.test(5,'3');
return 0;
}