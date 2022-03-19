#include<iostream>
using namespace std;

class node
{
    int data;
    node *next;
    public:
        void create(node * &start,int num)
        {
        if(start==NULL)
        {
            start=new node();
            start->data=num;
            start->next=NULL;
        }
        else
        {
            node *s=start;
            while(s->next!=NULL)
            {
                s=s->next;
            }
            s->next=new node();
            s->next->data=num;
            s->next->next=NULL;
        }
        }
        void displ(node *s)
        {
        int count=0;
        while(s!=NULL)
        {
            cout<<s->data<<"->";
            s=s->next;
            count++;

        }

        cout<<"NULL";
        cout<<"\nThe total nodes are:"<<count;
        }
        void insert_top(node * &start,int num)
        {
            node *top=new node();
            top->data=num;
            top->next=start;
            start=top;
        }
};
int main()
{
    node *start=NULL;
    node b;
    int ch,num,numt;
    do
    {
    cout<<"........MENU......."<<endl;
    cout<<"\t1.Create."<<endl;
    cout<<"\t2.Insert at Top."<<endl;
    cout<<"\t3.Display."<<endl;
    cout<<"\t4.Exit."<<endl;
    cout<<"Enter your choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:
    {
    cout<<"\tEnter elements:";
    cin>>num;
    b.create(start,num);
    break;
    }
    case 2:
    {
    cout<<"\nEnter no you want to enter at top:";
    cin>>numt;
    b.insert_top(start,numt);
    break;
    }
    case 3:
    cout<<"The linked list is:";
    b.displ(start);
    break;
    case 4:
    exit(0);
	default:
	cout<<"Invalid Choice....";
    }
    }while(ch!=4);

return 0;
}
