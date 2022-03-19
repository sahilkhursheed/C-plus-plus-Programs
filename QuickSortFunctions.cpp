#include <iostream>
using namespace std;

void swap(int [],int , int ); 
void quick_sort(int[],int,int);
int partition(int[],int,int);
 
int main()
{
    int a[50],n,i;
    cout<<"How many elements?"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {   cout<<"Enter Elements "<<i<<": ";
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
    cout<<"\nArray after sorting:"<<endl;
    
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;        
}
 
void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
 
int partition(int a[],int low,int high)
{
    int p,i,j,temp;
    p=a[high];
    i=low-1;
    for(j=low;j<=high-1;j++)
    {
    	if(a[j]<p)
    	{
    		i++;
    		swap(a,i,j);
		}
	}
	swap(a,i+1,high);
    return(i+1);
}
void swap(int arr[],int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
