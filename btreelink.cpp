#include<iostream>
using namespace std;
#define trees node
class trees
{
	int data;
	node *lchild,*rchild;
	public:
		trees()
		{
			lchild=NULL;
			rchild=NULL;
		}
		void insert(node *&,int );
		void inorder(node *&);
		void preorder(node *&);
		void postorder(node *&);
};

void trees::insert(node *&s,int num)
{
	if(s==NULL)
	{
		s=new node;
		s->data=num;
		s->lchild=NULL;
		s->rchild=NULL;
	}
	else
	{
		if(s->lchild==NULL)
		    insert(s->lchild,num);
		else
		    insert(s->rchild,num);  
	}
}

void trees::inorder(node *&s)
{
    if(s!=NULL)
    {
        inorder(s->lchild);
        cout<<s->data<<" ";
        inorder(s->rchild);
    }
}

void trees::preorder(node *&s)
{
    if(s!=NULL)
    {
        cout<<s->data<<" ";
        preorder(s->lchild);
        preorder(s->rchild);
    }
}

void trees::postorder(node *&s)
{
    if(s!=NULL)
    {
        postorder(s->lchild);
        postorder(s->rchild);
        cout<<s->data<<" ";
    }
}

int main() 
{
   int num;
   char ch;
   trees b;
   node *root=NULL;
   do
   {
        cout<<"Enter value to insert:  ";
        cin>>num;
        b.insert(root,num);
        cout<<"Do u want to enter more: ";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    cout<<"In-Order Traversal:\n";
	b.inorder(root);
	cout<<"\nPre-Order Traversal:\n";
	b.preorder(root);
	cout<<"\nPost-Order Traversal:\n";
	b.postorder(root);
 return 0;
}

