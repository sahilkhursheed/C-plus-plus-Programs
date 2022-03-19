#include <iostream>
using namespace std;
#define MAX 100
class queue
{
	int data[MAX];
	int front,rear;
	public:
		queue()
		{
			front=-1;
			rear=-1;
		}
		void insert(int num);
		void del();
		void display();
};

void queue::insert(int num)
{
	if(rear==MAX-1)
	cout<<"Queue is full"<<endl;
	else
	data[++rear]=num;
	if(front==-1)
	    front++;
}

void queue::del()
{
	if(front==-1)
	   cout<<"\nQueue is empty"<<endl;
	else
	{
	cout<<"\nDeleted Element is: "<<data[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	++front;
    }
}

void queue::display()
{
	int temp;
	if(front==-1)
	    cout<<"\nQueue is empty\n";
	else
	{    
	temp=front;    
    cout<<"\nThe Elements are: "<<endl;
	while(temp<=rear)
	{
		cout<<data[temp++]<<"->";
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
