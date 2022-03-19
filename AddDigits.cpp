#include<iostream>
void AddDigits()
{
	int num1,num2,sum=0;
	cout<<"Enter a number"<<endl;
	cin>>num1;
	while(num1!=0)
	{
		num2=num1%10;
		num1=num1/10;
		sum=sum+num2;
	}
	cout<<"The sum of all the digits of given number=\t"<<sum;
}
int main()
{
	AddDigits();
	return 0;
}