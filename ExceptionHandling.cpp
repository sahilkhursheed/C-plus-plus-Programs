#include<iostream>
using namespace std;

int main()
{
cout<<"\n Start \n ";
int a,b;
do{
cout<<"\n Read A and B ";
cin>>a>>b;
try
{
if (b == 0)
  throw b;
cout<<"\n A/B="<<a/b;
}
catch(int x)
{
cout << "Second number must be non zero x:"<<x;
}
}
while(a!=0);
cout<<"JMI \n The End";
return 0;
}
