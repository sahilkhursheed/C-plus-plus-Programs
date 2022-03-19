#include<iostream>
using namespace std;

class matrix
{
	float **a;
	int m, n;
	public:
		matrix(int x,int b=0)
		{
			m=x;
			if(b==0)
			n=x;
			else
			n=b;
			a=new float*[m];
			for(int i=0;i<m;i++)
			a[i]=new float[n];
		}
friend istream &operator>>(istream &abc,matrix &x);		
friend ostream &operator<<(ostream &abc,matrix x);
matrix operator*(matrix b);	
friend matrix operator*(int x, matrix b);
};

istream &operator>>(istream &abc,matrix &x)
{
	cout<<"Enter the order of matrix"<<x.m<<" x "<<x.n<<endl;
	for(int i=0;i<x.m;i++)
	  for(int j=0;j<x.n;j++)
	   abc>>x.a[i][j];
	   return abc;
}

ostream &operator<<(ostream &abc,matrix x)
{
	cout<<"Matrix"<<endl;
	for(int i=0;i<x.m;i++)
	{
	   for(int j=0;j<x.n;j++)
	      abc<<x.a[i][j]<<"\t";
    
       cout<<endl;
    }
   return abc;
}

matrix matrix::operator*(matrix x)
{
	if(n!=x.m)
	{
		cout<<"Matrix Not Possible"<<endl;
		exit(0);
   }
   matrix c(m,x.m) ;

   for(int i=0;i<m;i++)
   {
   for(int j=0;j<x.n;j++)
   {
   	   c.a[i][j]=0;
	   for(int k=0;k<n;k++)
	 	   c.a[i][j]=c.a[i][j]+a[i][k] * x.a[k][j];
	}
   }
   return c;
}


matrix operator*(int x, matrix b)
{
	matrix c(b.m,b.n);
   for(int i=0;i<b.m;i++)
    for(int j=0;j<b.n;j++)
        c.a[i][j] = x*b.a[i][j];
  return c;
}

int main()
{
	matrix a(3,2), b(2);
	cin>>a>>b;
	cout<<endl;
	cout<<"A="<<a<<endl<<"B="<<b<<endl;
	matrix c=a*b;
	matrix d =7*a;
	cout << "A*B = ";
	cout<<c<<endl<<"7 * A = "<<d<<endl;
	return 0;
}
