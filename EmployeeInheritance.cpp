#include<iostream>
using namespace std;
class person
{
	char name[20];
	int age;
	public:
		void getname_age()
		{
			cout<<"Enter the name of employee"<<endl;
			gets(name);
			cout<<"Enter the age of employee"<<endl;
			cin>>age;
		}
		void disp()
		{
			cout<<"Name of the Person:\t"<<name<<endl;
			cout<<"Age of the Person:\t"<<age<<endl;
		}
};
class employee:public person
{
	char desig[20];
	int salary;
	public:
		void getdessal()
		{
			cout<<"Enter the Designation"<<endl;
			cin.ignore();
			gets(desig);
			cout<<"Enter the Salary"<<endl;
			cin>>salary;
		}
		void display()
		{
			cout<<"The Designation is\t"<<desig<<endl;
			cout<<"The Salary is:\t"<<salary<<endl;
		}
};

int main()
{
	employee e;
	e.getname_age();
	e.getdessal();
	e.disp();
	e.display();
	return 0;
}

	
