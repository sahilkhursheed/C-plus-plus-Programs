#include<iostream>
using namespace std;
class node
{
    int data;
    node *next;
    node *start;
    public:
	void create();
	void show();
	void merge(node,node);
};

void node::create()
{
	node *s,*temp;
	int val,n,i;
	start=s=temp=NULL;
	cout<<"How many nodes :  ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements: "<<endl;
    for(i=1;i<=n;i++)
   {
      cin>>val;
      s=new node;
      s->data=val;
      s->next=NULL;
      if(start==NULL)
	      start=s;
      else
	     temp->next=s;
         temp=s;
   }
   cout<<"The list is created!\n";
}

void node::show()
{
	node *s=start;
   while(s!=NULL)
   {
      cout<<s->data<<" -> ";
      s=s->next;
   }
   cout<<"Null"<<endl;
}

void node::merge(node l,node m)
{
	node *s,*temp,*str,*ptr;
	int dat;
	str=l.start;
	ptr=m.start;
	start=s=temp=NULL;
	while(str!=NULL && ptr!=NULL)
   {
      if(str->data<=ptr->data)
      {
	     dat=str->data;
	     str=str->next;
      }
      else
      {
	     dat=ptr->data;
	     ptr=ptr->next;
      }
      s=new node;
      s->data=dat;
      s->next=NULL;
      if(start==NULL)
	     start=s;
      else
		 temp->next=s;
      temp=s;     
   }
   if(str==NULL)
   {
    while(ptr!=NULL)
    {
	s=new node;
	s->data=ptr->data;
	s->next=NULL;
	if(start==NULL)
	    start=s;
	else
	    temp->next=s;
	temp=s;
	ptr=ptr->next;
}
}
   else if(ptr==NULL)
   {
      while(str!=NULL)
      {
	    s=new node;
	    s->data=str->data;
	    s->next=NULL;
	    if(start==NULL)
	        start=s;
	    else
	        temp->next=s;
	    temp=s;
	    str=str->next;
      }
   }
   cout<<"The lists are merged."<<endl;
}

int main()
{
   node a,b,c;
   cout<<"Enter the First List"<<endl;
   a.create(); 
   cout<<"Enter the Second List"<<endl;
   b.create();
   cout<<"The first list is:   ";
   a.show();
   cout<<"The second list is:   ";
   b.show();
   c.merge(a,b);
   cout<<"Merged List is:  ";
   c.show();
   return 0;
}

