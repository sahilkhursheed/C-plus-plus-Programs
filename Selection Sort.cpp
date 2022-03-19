#include <iostream>
using namespace std;
int main()
{
	int n, arr[50], i, j, temp;
	cout<<"Enter the No. of elements in Array : ";
	cin>>n;
	for(i=0; i<n; i++)
	{
	cout<<"Enter Elements "<<i+1<<": ";	
	cin>>arr[i];
	}	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Array After Sorting :"<<endl;
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
    return 0;
}
