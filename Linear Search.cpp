#include<iostream>
using namespace std;
void lin_search(int x[],int n,int p)
{
	int i,flag = 0;
	for(i=0;i<n;i++)
	{
		if(p==x[i])
		{
			flag =1;
			break;
		}
	}
	if(flag==1)
	cout<<"The element is Present"<<endl;
	else
	cout<<"The element is not Present"<<endl;
}
int main()
{
	int a[10],n,i,k;
	cout<<"How many elements you want to enter"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Elements "<<i+1<<": ";
		cin>>a[i];
	}
	cout<<"Enter the element you want to search: "<<endl;
	cin>>k;
	lin_search(a,n,k);
	return 0;
}
