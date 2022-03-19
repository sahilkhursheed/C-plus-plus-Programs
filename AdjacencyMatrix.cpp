#include <iostream>
using namespace std;
#define MAX 20

class Adjmat
{
        int n;
        int **adj;
        bool *vis;
    public:
        Adjmat(int n)
        {
            this->n = n;
            vis = new bool [n];
            adj = new int* [n];
            for (int i = 0; i < n; i++)
            {
                adj[i] = new int [n];
                for(int j = 0; j < n; j++)
                {
                    adj[i][j] = 0;
                }
            }
        }
        
        void edge(int ori, int dest)
        {
            if( ori > n || dest > n || ori < 0 || dest < 0)
            {   
                cout<<"Invalid edge!\n";
            }
            else
            {
                adj[ori - 1][dest - 1] = 1;
            }
        }
        
        void display()
        {
            int i,j;
            for(i = 0;i < n;i++)
            {
                for(j = 0; j < n; j++)
                    cout<<adj[i][j]<<"  ";
                cout<<endl;
            }
        }
};
 
int main()
{
    int node, max, ori, dest;
    cout<<"Enter number of nodes: ";
    cin>>node;
    Adjmat d(node);
    max = node * (node - 1);
    for (int i = 0; i < max; i++)
    {
        cout<<"Enter edge (-1 -1 to exit): ";
        cin>>ori>>dest;
        if((ori == -1) && (dest == -1))
            break;
        d.edge(ori, dest);
    }
    d.display();
    return 0;
}
