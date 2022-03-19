#include<iostream>
using namespace std;

void create(int arr[], int s);
void display(int arr[], int s);
void insertion_sort(int arr[], int s);
void selection_sort(int arr[], int s);
void bubble_sort(int arr[],int s);
int linearsearch(int arr[],int key,int s);
int binarysearch(int arr[],int key,int s);

int main()
{
	int arr[100];
	int n,k,ch,ans;
	cout<<"Enter The Size of Array: ";
	cin>>n;
	do
	{
		cout<<"----------Menu----------"<<endl;
		cout<<"1.Create Array "<<endl;
		cout<<"2.Display Array "<<endl;
		cout<<"3.Bubble Sort "<<endl;
		cout<<"4.Insertion Sort "<<endl;
		cout<<"5.Selection Sort "<<endl;
		cout<<"6.Linear Search "<<endl;
		cout<<"7.Binary Search "<<endl;
		cout<<"8.Exit "<<endl;
		cout<<"Enter your choice (1-8)"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			    create(arr,n);
			    break;
			case 2:
				display(arr,n);
				break;
			case 3:
				bubble_sort(arr,n);
				break;
			case 4:
				insertion_sort(arr,n);
				break;
			case 5:
				selection_sort(arr,n);
				break;
			case 6:
				cout<<"Enter the key elememts\n";
                cin>>k;
                ans=linearsearch(arr,k,n);
                if(ans!=-1)
                    cout<<"Element "<<k<<" is found\n";
                else
                    cout<<"Element "<<k<<" is not found\n";
                break;
            case 7:
			    bubble_sort(arr,n);
			    cout<<"Enter the key elememts\n";
                cin>>k;
                ans=binarysearch(arr,k,n);
                if(ans!=-1)
                    cout<<"Element "<<k<<" is found\n";
                else
                    cout<<"Element "<<k<<" not found\n";
                break;
            case 8:
			    exit(0);
			default:
			    cout<<"Invalid Entry....."<<endl;    
		}  
	}while(ch!=8);
	return 0;
}

void create(int arr[], int s)
{
	for(int i=0;i<s;i++)
	{
		cout<<"Enter element "<<i+1<<":";
		cin>>arr[i];
	}
}
void display(int arr[], int s)
{
	cout<<"The elements of the array are:\n";
	for(int i=0;i<s;i++)
		cout<<arr[i]<<"  ";
		cout<<endl;
}
void bubble_sort (int arr[], int n)
{
	int i, j,temp;
	for (i = 0; i < n; ++i)
	{	for (j = 0; j < n-i-1; ++j)
		{	if (arr[j] > arr[j+1])
			{	temp = arr[j] ;
				arr[j] = arr[j+1];
				arr[j+1] = temp;}	} }	
}	
void insertion_sort(int arr[], int s)
{
	int i,j,temp;
	for(i=1;i<s;i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) &&(j>=0))
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}

void selection_sort(int arr[], int s)
{
	int i,j,temp;
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++) 	
		if(arr[i]<arr[j])
		{
	    	temp=arr[i]; 
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}

int linearsearch(int arr[],int key,int n)
{
        int i;
        for(i=0;i<n;i++){
                if(key==arr[i])
                        return i;
        }

        return -1;
}

int binarysearch(int a[20],int key,int n)
{
        int high,low,mid;
        low=0;
        high=n-1;
        while(low<=high)
		{
                mid=(low+high)/2;
                if(a[mid]==key)
                        return mid;
                else if(a[mid]<key)
                        low=mid+1;
                else
                        high=mid-1;
        }
        return -1;
}
