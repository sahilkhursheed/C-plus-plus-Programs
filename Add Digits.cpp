
// INCOMPLETE PROGRAM
#include<iostream>
using namespace std;
class Number{
int num1,num2,sum;
public:
void AddDigits()
{
	cout<<"Enter a number"<<endl;
	cin>>num1;
	while(num1/10>=0)
	{
		int num2;
		num2=num1%10;
		sum=sum+num2;
		num1=num1/10;
	}
	cout<<"The sum of all the digits of given number:\t"<<sum;
}};
int main()
{
	Number n;
	n.AddDigits();
	return 0;
}