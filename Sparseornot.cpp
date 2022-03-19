#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter the dimensions of the matrix: ";
    int m, n;
    cin>>m>>n;
    int A[m][n];
    int z = 0;
    cout<<"Enter the elements of the matrix: ";
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
        {
            cin>>A[i][j];
            if(A[i][j] == 0)
                z++;
        }
 
    if(z > (m*n)/2)
    {
    cout<<"The matrix is a sparse matrix"<<endl;
    cout<<"The Sparse Matrix is :"<<endl;
    for(int i=0; i<m; i++)
    {
    for(int j=0; j<n; j++)
    cout<<A[i][j]<<"  ";
    cout<<endl;
    }
	}
    else
        cout<<"The matrix is not a sparse matrix";
return 0; 
}
