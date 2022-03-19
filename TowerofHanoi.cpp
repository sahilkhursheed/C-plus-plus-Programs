#include<iostream>
using namespace std;

void move(int n)
{
	stack<int>s1(n*n);
	stack<char>s2(n*n),s3(n*n),s4(n*n);
	s1.push(n);
	s2.push('A');
	s3.push('B');
	s4.push('D');
	while(s1.isEmpty()==false)
	{
		char s,i,d;
		n=s1.pop();
		s=s2.pop();
		i=s3.pop();
		d=s4.pop();
		if(n>1)
		{
			s1.push(n-1);
			s2.push(i);
			s3.push(s);
			s4.push(d);
			s1.push(1);
			s2.push(s);
			s3.push(i);
			s4.push(d);
			s1.push(n-1);
			s2.push(s);
			s3.push(d);
			s4.push(i);
		}
		else
		{
			cout<<"\nMove "<<s<<" ->"<<d;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter a Number:  ";
	cin>>n;
	cout<<move(n)<<endl;
}
