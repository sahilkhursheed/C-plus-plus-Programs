#include<iostream>
using namespace std;

class Person
{
	char name[20];
	int age;
	public:
		friend istream &operator>>(istream &abc,Person &x)
		{
		cout<<"Enter name :"<<endl;
		cin.ignore();
		gets(x.name);
		cout<<"Enter Age :"<<endl;
		abc>>x.age;
		return abc;
	}
friend ostream &operator<<(ostream &abc,Person &x)
	{
		abc<<"("<<x.name<<","<<x.age<<")";
		return abc;
  }
	bool operator>(Person x)
	{
	
		if(age>x.age)
		return true;
		else
		return false;
	}	
};
void read(Person x[],int n)
{
	cout<<"\n Read "<<n<<" Persons ";
	for(int i=0;i<n;i++)
	cin>>x[i];
}
void print(Person x[],int n)
{
	for(int i=0;i<n;i++)
	cout<<x[i]<<" ";
}
void sort(Person x[],int n)
{
	for(int i=1;i<n;i++)
	{
		bool issorted =true;
		for(int j=0;j<n-i;j++)
		{
			if(x[j]>x[j+1])
			{
				Person t=x[j];
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
	Person *a=new Person[n];
	read(a,n);
	cout<<"List before Sorting: "<<endl;
	print(a,n);
	cout<<endl;
	cout<<"List after Sorting: "<<endl;
	sort(a,n);
	print(a,n);
	return 0;
}
