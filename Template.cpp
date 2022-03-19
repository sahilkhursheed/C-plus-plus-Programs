#include<iostream>
using namespace std;

template<class T>
class stack
{
	T *a;
	int length;
	int tos;
	public:
		stack(int n)
		{
			length=n;
			a=new T[n];
			tos=-1; 
		}
		bool isEmpty()
		{
			if(tos==-1)
			return true;
			else
			return false;
		}
		void push(T x)
		{
			tos=tos+1;
			a[tos]=x;
		}
		T pop()
		{
			T x= a[tos];
			tos =tos-1;
			return x;
		}
};

int sumofdigits(int n)
{
	stack<int>s(10);
	while(n!=0)
	{
		s.push(n%10);
		n=n/10;
	}
	int sol=0;
	while(s.isEmpty()==false)
	{
		sol=sol+s.pop();
	}
	return sol;
}

int reversedigits(int n)
{
	stack<int>s(10);
	while(n!=0)
	{
		s.push(n%10);
		n=n/10;
	}
	int rn=0,p=1;
	while(s.isEmpty()==false)
	{
		rn=rn+p*s.pop();
		p=10*p;
	}
	return rn;
}

int countdigits(int n)
{
	stack<int>s(10);
	while(n!=0)
	{
		s.push(n%10);
		n=n/10;
	}
	int c=0;
	while(s.isEmpty()==false)
	{
		s.pop();
		c++;
	}
	return c;
}

void move(int n)
{
	stack<int>s1(n*n);
	stack<char>s2(n*n),s3(n*n),s4(n*n);
	s1.push(n);
	s2.push('A');
	s3.push('B');
	s4.push('C');
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
			cout<<"\nMove "<<s<<" -> "<<d;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter a number:  ";
	cin>>n;
	cout<<"Sum of Digits is:  "<<sumofdigits(n)<<endl;
	cout<<"Reverse of the number is:  "<<reversedigits(n)<<endl;
	cout<<"Total Number of Digits is:  "<<countdigits(n)<<endl;
	move(3);
	return 0;
}
