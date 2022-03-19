#include<iostream>
using namespace std;
#define trees node
char a[]={ 'A','B','C','D','E','F','G','\0','\0','H','\0',
            '\0','\0','\0','\0','\0','\0','\0','\0','\0'};
class trees
{
	char data;
	node *left,*right;
	public:
		node* insert(int n);
		void inorder(node *);
		void preorder(node *);
		void postorder(node *);
};

node* trees::insert(int n)
{
	node *tree=NULL;
	if(a[n]!='\0')
	{
		tree=new node();
        tree->left=insert(2*n+1);
        tree->data=a[n];
        tree->right=insert(2*n+2);
   }
   return tree;
}

void trees::inorder(node *tree)
{
    if(tree!=NULL)
    {
        inorder(tree->left);
        cout<<tree->data<<"\t";
        inorder(tree->right);
    }
}

void trees::preorder(node *tree)
{
    if(tree!=NULL)
    {
        cout<<tree->data<<"\t";
        preorder(tree->left);
        preorder(tree->right);
    }
}

void trees::postorder(node *tree)
{
    if(tree!=NULL)
    {
        postorder(tree->left);
        postorder(tree->right);
        cout<<tree->data<<"\t ";
    }
}

int main() 
{
	trees *root=NULL;
	trees b;
	root = b.insert(0);
	cout<<"In-Order Traversal:\n";
	b.inorder(root);
	cout<<"\nPre-Order Traversal:\n";
	b.preorder(root);
	cout<<"\nPost-Order Traversal:\n";
	b.postorder(root);
return 0;
}
