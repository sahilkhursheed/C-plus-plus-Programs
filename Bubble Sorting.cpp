#include<iostream>
using namespace std;

void read(int x[],int n)
{
	cout<<"\n Read "<<n<<" numbers ";
	for(int i=0;i<n;i++)
	cin>>x[i];
}
void print(int x[],int n)
{
	for(int i=0;i<n;i++)
	cout<<x[i]<<" ";
}
void sort(int x[],int n)
{
	for(int i=1;i<n;i++)
	{
		bool issorted =true;
		for(int j=0;j<n-i;j++)
		{
			if(x[j]>x[j+1])
			{
				int t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
			bool issorted = false;
		}
	}
}
int main()
{
	int n;
	cout<<"Enter The Value of n : ";
	cin>>n;
	int *a=new int[n];
	read(a,n);
	cout<<"List before Sorting: "<<endl;
	print(a,n);
	cout<<endl;
	cout<<"List after Sorting: "<<endl;
	sort(a,n);
	print(a,n);
	return 0;
}
