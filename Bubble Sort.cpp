#include<iostream>
using namespace std;
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
	cout<<"Enter the size of Array: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Number "<<i+1<<": ";
	    cin>>a[i];
    }
	bubble_sort(a,n);
	cout<<"Array after Sorting "<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
