#include<iostream>
using namespace std;
#define trees node
class trees
{
	int data;
	node *left,*right;
	public:
		trees()
		{
			left=NULL;
			right=NULL;
		}
		node* insert(node *&,int );
		node* del(node *&,int );
		void inorder(node *&);
		void preorder(node *&);
		void postorder(node *&);
		node* findMin(node *);
};

node* trees::findMin(node* root)  
{  
    if(root==NULL)
    {
        return NULL;
    }
    if(root->left)
        return findMin(root->left);
    else
        return root;  
}  

node* trees::insert(node* &root, int num)  
{
	if(root==NULL)
	{
		node *temp=new node();
		temp->data=num;
		temp->left=temp->right=NULL;
		return temp;
	}
    if (num > root->data)  
        root->right = insert(root->right,num);  
    else  
        root->left = insert(root->left,num);  
    return root;  
} 
 
node* trees::del(node*& root, int num)  
{  
    node *temp;
    if(root==NULL)
    {
        cout<<"Element Not Found";
    }
    else if(num < root->data)
    {
        root->left = del(root->left, num);
    }
    else if(num > root->data)
    {
        root->right = del(root->right, num);
    }
    else
    {
        if(root->right && root->left)
        {
            temp = findMin(root->right);
            root->data= temp->data;
            root-> right = del(root->right,temp->data);
        }
        else
        {
            temp = root;
            if(root->left == NULL)
                root = root->right;
            else if(root->right == NULL)
                root = root->left;
            delete temp;
        }
    }
    return root;
}

void trees::inorder(node *&root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void trees::preorder(node *&root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void trees::postorder(node *&root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}  

int main()
{
	trees *root=NULL;
    int num,nom,ch;
    trees b;
    do
    {
        cout<<"\n1.Insert\n2.Delete\n3.Inorder\n4.Preorder\n5.Postorder\n6Exit\n";
        cout<<"Enter ur choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nEnter element to be insert:";
            cin>>num;
            root = b.insert(root,num);
            break;
        case 2:
            cout<<"\nEnter element to be deleted:";
            cin>>nom;
            root = b.del(root,nom);
            break;
        case 3:
            cout<<"\nInorder Travesals is:";
            b.inorder(root);
            break;
        case 4:
            cout<<"\nPreorder Traversals is:";
            b.preorder(root);
            break;
        case 5:
            cout<<"\nPostorder Traversals is:";
            b.postorder(root);
            break;
        case 6:
            exit(0);
            break;
        default:
            cout<<"\nEnter correct choice:";
            break;
        }
    }while(ch!=6);
    return 0;
}
