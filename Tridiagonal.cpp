#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int m, n, i, j, A[10][10];
    cout << "Enter the number of rows and columns of the matrix :\n";
    cin >> m >> n;
    cout << "Enter the array elements :\n";
    for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
        {
		    cout<<"Enter Elements "<<i<<" "<<j<<": ";
            cin >> A[i][j];
        }
    cout << "Tridiagonal Matrix:"<<endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((i==j)||(abs(i-j)==1))
                cout <<A[i][j]<<"\t";
            else
                cout<<"0\t";
        }
        cout << "\n";
    }
    return 0;
}
