#include<iostream>
using namespace std;
int main()
{
	int n, x[50], i, j, temp;
	cout<<"Enter the number of elements you want to enter: ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"Enter Elements "<<i+1<<": ";
		cin>>x[i];
	}
	for(i=1; i<n; i++)
	{
		temp=x[i];
		j=i-1;
		while((temp<x[j]) && (j>=0))
		{
			x[j+1]=x[j];
			j=j-1;
		}
		x[j+1]=temp;
	}
	cout<<"Array after sorting : \n";
	for(i=0; i<n; i++)
	cout<<x[i]<<" ";
return 0;
}
