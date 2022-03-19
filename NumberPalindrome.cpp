/*This program checks a given number for being a Palindrome*/
#include<iostream>
using namespace std;

int num1,num2,num3,rev;
void ReverseNumber()
{
  cout<<"Enter a number"<<endl;
  cin>>num1;
  num2 = num1;
  do
   {
     num3 = num2%10;
     num2 = num2/10;
     rev = rev*10+num3;
   }while(num2 != 0);
  if(rev == num1)
    cout<<num1<<" is a Palindrome";
  else
    cout<<num1<<" is not a Palindrome";
}
int main()
{
  cout<<"Program to check for a \'Palindrome\'."<<endl;
  ReverseNumber();
  return 0;
}