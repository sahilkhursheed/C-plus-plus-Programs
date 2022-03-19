#include<iostream>
using namespace std;
class node
{
    int data;
    node *next;
    public:
        void create(node * &start,int );
        void insert_top(node * &start,int );
        void display(node *s);
		void insert_last(node * &start,int );
		void insert_mid(node * &start,int ,int ); 
		void search(node * &start,int );
		void delete_top(node *&start);
		void delete_last(node*&start);
		void delete_any(node *&start,int );
};

void node::create(node * &start,int num)
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
            
void node::insert_top(node * &start,int num)
{
    node *top=new node();
    top->data=num;
    top->next=start;
    start=top;
}

void node::display(node *s)
{
    int count=0;
    while(s!=NULL)
    {
    cout<<s->data<<"->";
    s=s->next;
    count++;
    }
    cout<<"NULL";
    cout<<"\nThe total nodes are:"<<count<<endl;
}

void node::insert_last(node * &start,int num)
{
	node *last=new node();
	last->data=num;
	last->next=NULL;
	if(start==NULL)
	{
		last->next=NULL;
		start=last;
	}
	else
	{
	node *temp = start;
	while(temp->next!=NULL)
	{
	temp = temp->next;
	} 
	temp->next=last;
	}
}

void node::insert_mid(node *&start,int num,int pos)
{
	node *mid=new node();
	node *temp=new node();
	node *s=start;
	if(start==NULL)
	{
		mid->next=NULL;
		start=mid;
	}
	else
	{
	for(int i=1;i<pos;i++)
    {
        mid=s;
        s=s->next;
    }
        temp->data=num;
        mid->next=temp;
        temp->next=s;
    }
}

void node::search(node * &start,int num)
{
	int flag=0;
	node *s=start;
	while(s!=NULL)
	{
		if(s->data==num)
		{
			flag=1;
			break;
		}
		s=s->next;
	}
	if(flag==1)
	cout<<num<<" is presnt in node "<<endl;
	else
	cout<<num<<" is not present in node "<<endl;
}

void node::delete_top(node *&start)
{
	if(start==NULL)
	cout<<"List is Empty"<<endl;
	else
	{
		node *del = start;
		start=start->next;
		delete del;
	}
}

void node::delete_last(node *&start)
{
	node *del,*temp;
	if(start==NULL)
	cout<<"The List Is Empty"<<endl;
	if(start->next==NULL)
	{
		del=start;
		start=NULL;
		delete del;
	}
	else
	{
		del = start;
		while(del->next!=NULL)
		{
			temp=del;
			del=del->next;
		}
		temp->next=NULL;
		delete del;
	}
}

void node::delete_any(node *&start,int pos)
{
	if(start==NULL)
	cout<<"The List is Empty"<<endl;
	node *del=new node();
	node *temp=start;
	for(int i=1;i<pos;i++)
    {
        del=temp;
        temp=temp->next;
    }
    del->next=temp->next;
}

int main()
{
    node *start=NULL;
    node b;
    int ch,num,numt,sea,nm,del;
    do
    {
    cout<<"........MENU......."<<endl;
    cout<<"\t1.Create."<<endl;
    cout<<"\t2.Insert at Top."<<endl;
    cout<<"\t3.Insert at Last."<<endl;
    cout<<"\t4.Insert at Any Position."<<endl;
    cout<<"\t5.Search An Element."<<endl;
    cout<<"\t6.Deleting from Top."<<endl;
    cout<<"\t7.Deleting from Last."<<endl;
    cout<<"\t8.Deleting from Any Position."<<endl;
    cout<<"\t9.Display."<<endl;
    cout<<"\t10.Exit."<<endl;
    cout<<"Enter your choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:
    {
    cout<<"\t\nEnter elements:";
    cin>>num;
    b.create(start,num);
    break;
    }
    case 2:
    {
    cout<<"\nEnter no you want to enter at top: ";
    cin>>numt;
    b.insert_top(start,numt);
    break;
    }
    case 3:
    cout<<"\nEnter the No. you want to enter at last: ";
    cin>>numt;
    b.insert_last(start,numt);
    break;
    case 4:
    cout<<"\nEnter the No. you want to enter: ";
    cin>>numt;
    cout<<"Enter the position where u want to enter: ";
    cin>>nm;
    b.insert_mid(start,numt,nm);
    break;
    case 5:
    cout<<"\nEnter the Number to Search: ";
	cin>>sea;
	b.search(start,sea);
	break;
	case 6:
	b.delete_top(start);
	cout<<"\nTop Element Deleted "<<endl;;
	break;
	case 7:
	b.delete_last(start);
	cout<<"\nLast Element Deleted "<<endl;
	break;
	case 8:
	cout<<"\nEnter the position of element to be Deleted "<<endl;
	cin>>del;	
	b.delete_any(start,del);
	break;	
    case 9:
    cout<<"\nThe linked list is:";
    b.display(start);
    break;
    case 10:
    exit(0);
	default:
	cout<<"Invalid Choice...."<<endl;
    }
    }while(ch!=10);
return 0;
}

