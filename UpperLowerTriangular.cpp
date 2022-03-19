#include<iostream>
using namespace std;

void lower(int matrix[10][10], int row, int col) 
{ 
    int i, j; 
    for (i = 0; i < row; i++) 
    { 
        for (j = 0; j < col; j++) 
        { 
            if (i < j) 
            { 
                cout <<"0\t";
            } 
            else
            cout << matrix[i][j] << "\t";
        } 
        cout << endl; 
    } 
} 
  
void upper(int matrix[10][10], int row, int col) 
{ 
    int i, j; 
      
    for (i = 0; i < row; i++) 
    { 
        for (j = 0; j < col; j++) 
        { 
            if (i > j) 
            { 
                cout <<"0\t"; 
            } 
            else
             cout<<matrix[i][j] << "\t";
        } 
        cout << endl; 
    } 
} 
  
int main() 
{ 
    int matrix[10][10],row,col,i,j; 
    cout<<"Enter the Dimension of matrix"<<endl;
    cin>>row>>col;
    cout << "Enter the array elements :\n";
    for (i = 0; i < row; i++)  
        for (j = 0; j < col; j++) 
        {
		    cout<<"Enter "<<i<<" "<<j<<": ";
            cin>>matrix[i][j];
        }
    cout << "Lower triangular matrix: \n"; 
    lower(matrix, row, col); 
      
    cout << "Upper triangular matrix: \n"; 
    upper(matrix, row, col); 
          
    return 0; 
} 
