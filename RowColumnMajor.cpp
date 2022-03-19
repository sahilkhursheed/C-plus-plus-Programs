#include<iostream>
using namespace std;
int main()
{
	int i,j,m,n;
	int arr[100][100];
	cout<<"Enter the dimension of array "<<endl;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		cout<<"Enter Element "<<i<<" "<<j<<": ";
		cin>>arr[i][j];
    }
    }
    cout<<"Row Major"<<endl;
    for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
    } 
    cout<<"Column Major"<<endl;
    for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		cout<<arr[j][i]<<"\t";
    }
    cout<<endl;
    } 
    return 0;
}
