#include<iostream>
using namespace std;
int main ()
{
	int i,j,k,p,m,n,a[10][10],b[10];
	cout<<"Enter the Size of Matrix: "<<endl;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		cout<<"Enter Number "<<i<<" "<<j<<": ";
		cin>>a[i][j];
	}
    }
    cout<<endl;
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	cout<<a[i][j]<<"\t";
	}
	cout<<endl;	
	}
	cout<<endl;
cout<<"The Location and Non-Zero element are: "<<endl;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		if(a[i][j]!=0)
		{
			cout<<"Index is :"<<i<<" "<<j<<" Number is: "<<a[i][j]<<endl;
			p++;
    	    b[k++]=a[i][j];
    	}

	cout<<"The New Array is:"<<endl;
    for(k=0;k<p;k++)
	cout<<b[k]<<"  ";
	return 0;
}
