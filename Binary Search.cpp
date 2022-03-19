#include<iostream>
using namespace std;
void bin_search(int x[],int n,int key)
{
	int low,mid,high,flag=0;
	low=0;
	high=n-1;
	while(low <= high)
	{
		mid = (low + high)/2;
		
		if(key < x[mid])
		high = mid - 1;
		
		else if(key > x[mid])
		low = mid + 1;
		
		else if(x[mid]==key)
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	cout<<"The Element is present"<<endl;
	else
	cout<<"The Element is not present"<<endl;
}
void bubble_sort(int x[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
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
	bubble_sort(a,n);
	cout<<"The Soretd array is"<<endl;
	for(i=0;i<n;i++)
	 cout<<a[i]<<" ";
	 cout<<endl;
	cout<<"Enter the element you want to search: "<<endl;
	cin>>k;
	bin_search(a,n,k);
	return 0;
}
