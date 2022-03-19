#include<iostream>
using namespace std;

class matrix
{
int m[5][5];
int row;
int col;
public:
int operator==(matrix);
void getdata();
matrix operator-(matrix);
matrix operator+(matrix);
matrix operator*(matrix);
friend ostream & operator << (ostream &,matrix &);
};

int matrix::operator==(matrix cm)
{
  if(row==cm.row && col==cm.col)
  {
    return 1;
  }
  return 0;
}
void matrix::getdata()
{
	cout<<"Enter the Number of rows"<<endl;
	cin>>row;
	cout<<"Enter the Number of columns"<<endl;
	cin>>col;
    for(int i=0;i<row;i++) 
    {
        for(int j=0;j<col;j++) 
         {
         cout<<"Value in index "<<i+1<<","<<j+1<<": "; 
         cin>>m[i][j];
         }
    }
}

matrix matrix::operator+(matrix am)
{
  matrix c;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      c.m[i][j]=m[i][j]+am.m[i][j];
    }
    c.row=row;
    c.col=col;
  }
  return c;
}

matrix matrix::operator-(matrix sm)
{
  matrix c;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      c.m[i][j]=m[i][j]-sm.m[i][j];
    }
    c.row=row;
    c.col=col;
  }
  return c;
}

matrix matrix::operator*(matrix a)
{
	matrix c;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		 c.m[i][j]=0;
		for(int k=0;k<col;k++)
               c.m[i][j]=c.m[i][j]+m[i][k]*a.m[k][j];
        }
    }
return c;
}

ostream & operator <<(ostream &fout,matrix &d)
{
  for(int i=0;i<d.col;i++)
  {
    for(int j=0;j<d.col;j++)
    {
      fout<<d.m[i][j];
      cout<<"\t";
    }
    cout<<endl;
  }
return fout;
}
int main()
{
  matrix m1,m2,m3,m4,m5;
  cout<<"Enter the Details of First Matrix"<<endl;
  m1.getdata();
  cout<<"Enter the Details of Second Matrix"<<endl;
  m2.getdata();
  if(m1==m2)
  {
    m3=m1+m2;
    m4=m1-m2;
    m5=m1*m2;
    cout<<"Addition of matrices is"<<endl;
    cout<<m3<<endl;
    cout<<"Subtraction of matrices is"<<endl;
    cout<<m4<<endl;
    cout<<"Multiplication of matrices is"<<endl;
    cout<<m5<<endl;
  }
  else
    cout<<"Order of the Input Matrices is not Identical";
  return 0;
}
