#include<iostream>
using namespace std;
class treeNode
{
	int data;
	treeNode *left,*right;
	public:
		trees()
		{
			left=NULL;
			right=NULL;
		}
treeNode* FindMin(treeNode *node)
{
    if(node==NULL)
    {
        /* There is no element in the tree */
        return NULL;
    }
    if(node->left) /* Go to the left sub tree to find the min element */
        return FindMin(node->left);
    else
        return node;
}

treeNode *Insert(treeNode *node,int data)
{
    if(node==NULL)
    {
        treeNode *temp;
        temp=new treeNode;
//temp = (treeNode *)malloc(sizeof(treeNode));
        temp -> data = data;
        temp -> left = temp -> right = NULL;
        return temp;
    }
    if(data >(node->data))
    {
        node->right = Insert(node->right,data);
    }
    else if(data < (node->data))
    {
        node->left = Insert(node->left,data);
    }
    /* Else there is nothing to do as the data is already in the tree. */
    return node;
}
treeNode * Delet(treeNode *node, int data)
{
    treeNode *temp;
    if(node==NULL)
    {
        cout<<"Element Not Found";
    }
    else if(data < node->data)
    {
        node->left = Delet(node->left, data);
    }
    else if(data > node->data)
    {
        node->right = Delet(node->right, data);
    }
    else
    {
        /* Now We can delete this node and replace with either minimum element
        in the right sub tree or maximum element in the left subtree */
        if(node->right && node->left)
        {
            /* Here we will replace with minimum element in the right sub tree */
            temp = FindMin(node->right);
            node -> data = temp->data;
            /* As we replaced it with some other node, we have to delete that node */
            node -> right = Delet(node->right,temp->data);
        }
        else
        {
            /* If there is only one or zero children then we can directly
            remove it from the tree and connect its parent to its child */
            temp = node;
            if(node->left == NULL)
                node = node->right;
            else if(node->right == NULL)
                node = node->left;
            delete temp; /* temp is longer required */
        }
    }
    return node;
}

void Inorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    Inorder(node->left);
    cout<<node->data<<" ";
    Inorder(node->right);
}
void Preorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    cout<<node->data<<" ";
    Preorder(node->left);
    Preorder(node->right);
}
void Postorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    Postorder(node->left);
    Postorder(node->right);
    cout<<node->data<<" ";
}
};
int main()
{
    treeNode *root = NULL,*temp;
    int ch,num,nom;
    treeNode b;
    while(1)
    {
        cout<<"\n1.Insert\n2.Delete\n3.Inorder\n4.Preorder\n5.Postorder\n6Exit\n";
        cout<<"Enter ur choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nEnter element to be insert:";
            cin>>num;
            root = b.Insert(root,num);
            break;
        case 2:
            cout<<"\nEnter element to be deleted:";
            cin>>nom;
            root = b.Delet(root,nom);
            break;
        case 3:
            cout<<"\nInorder Travesals is:";
            b.Inorder(root);
            break;
        case 4:
            cout<<"\nPreorder Traversals is:";
            b.Preorder(root);
            break;
        case 5:
            cout<<"\nPostorder Traversals is:";
            b.Postorder(root);
            break;
        case 6:
            exit(0);
            break;
        default:
            cout<<"\nEnter correct choice:";
            break;
        }
    }
    return 0;
}
