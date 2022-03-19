#include<iostream>
using namespace std;
void print(int *num, int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    cout<<num[i]<<" ";
 }
cout<<endl;
}
int main()
  {
    int num[10];
    int *ptr;
    int temp;
    int i,n,j;
    cout<<"how many numbers"<<endl;
    cin>>n;
     cout<<"enter the list of numbers"<<endl;
	for(int i=0;i<n;i++)
	cin>>num[i];
	for(j=0;j<=n;j++)
	{
	for(i=0;i<n-1;i++)
	{
	temp=num[i];
	num[i]=num[i+1];
	num[i+1]=temp;
	print(num,n);
	}
	}
	return 0;
	}