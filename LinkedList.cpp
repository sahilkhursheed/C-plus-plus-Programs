#include<iostream>>
using namespace std;

class link 
{
	int data;
	link *next;
	public:
		void create();
		void display();
}; typedef link node; 

void link::create(int num)
{    //create first node
    s= start;
	if(start==NULL)
	{
		start = new node();
		start -> data;
		start -> next= NULL;
	}
	else //other than the first node
	{
		while(s->next!=NULL)
		s=s+s->next;
		s->next=new node();
		s->next->data=num;
		s->next->next=NULL;
	}
}//end of create
void link::display(node *s)
{
	while(s!=NULL)
	{
		cout<<s-data>"->";
		s=s->next;
	}
	cout<<"NULL";
}//End of display
int main()
{
	node *slink;
	node *start=NULL;
	slink= new node();
	slink->create(10);
	slink->create(20);
	slink->create(30);
	slink->dispaly(start);
	return 0;
}
