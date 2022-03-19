#include<iostream>
using namespace std;
#define queue node
class queue 
{
int data;
node *next;
node *front,*rear;
	public:
		queue()
		{
			front=NULL;
			rear=NULL;
		}
		void insert(int num);
		void del();
		void display();
};

void queue::insert(int num)
{
	node *temp=new node;
	temp->data=num;
	temp->next=NULL;
	if(rear==NULL)
	{
		rear=temp;
		front=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
}

void queue::del()
{
	if(front!=NULL)
	{
		node *temp=front;
		cout<<"Deleted Element is:  "<<front->data;
		front=front->next;
		delete temp;
		if(front==NULL)
		    rear=NULL;
	}
	else
	cout<<"\nQueue is Empty\n";
}

void queue::display()
{
	node *temp=front;
	if(front==NULL)
	    cout<<"\nQueue is Empty\n";
	else
	{
	cout<<"\nThe Elements are: "<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
    }
}

int main()
{
int ch, val;
queue b; 
do 
{
	cout<<"\n........MENU......."<<endl;
    cout<<"\t1.Insertion"<<endl;
    cout<<"\t2.Deletion"<<endl;
    cout<<"\t3.Display"<<endl;
    cout<<"\t4.Exit"<<endl;
    cout<<"Enter choice:  ";
    cin>>ch;
    switch(ch) 
	{
    case 1: 
		{   
        cout<<"Enter value to insert:"<<endl;
        cin>>val;
        cout<<endl;
        b.insert(val);
        break;
        }
    case 2: 
        b.del();
        break;
    case 3: 
        b.display();
        break;
    case 4: 
		exit(0);
    default: 
        cout<<"Invalid Choice"<<endl;
   }
} while(ch!=4); 
return 0;
}
