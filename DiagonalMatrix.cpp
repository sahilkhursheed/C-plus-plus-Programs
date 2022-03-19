#include<iostream>
using namespace std;
int main()
{
	int i,j,m,n;
	cout<<"Enter the dimension of array "<<endl;
	cin>>m>>n;
	int **arr=new int*[m];
	for(i=0;i<m;i++)
        arr[i]=new int[n]; 
			
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		cout<<"Enter Element "<<i<<" "<<j<<": ";
		cin>>arr[i][j];
    }
    cout<<"The Diagonal Matrix is:"<<endl;
    for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		if(i==j)
		cout<<arr[i][j]<<"\t";
		else
		cout<<"0\t";
    }
    cout<<endl;
    }
    return 0;
}
