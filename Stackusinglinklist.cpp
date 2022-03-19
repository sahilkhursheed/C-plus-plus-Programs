#include<iostream>
using namespace std;

#define stack node
class stack
{
int data;
node *next;
public:
int push(node * &start,int num)
{
node *top;
top=new node();
if(!top)
{
cout<<"Stack overflow."<<endl;
return 0;
}
else
{
top->data=num;
top->next=start;
start=top;
return top->data;
}
}

int peeptop(node* &start)
{
if(start==NULL)
{
cout<<"The stack is empty:"<<endl;
return 0;
}
return start->data;
}

int pop(node * &start)
{
if(start==NULL)
{
cout<<"stack is empty."<<endl;
return 0;
}
else
{
node *temp;
temp=start;
start=start->next;
return temp->data;
delete(temp);
}
}
int peep(node *s)
{
cout<<"NULL";
while(s!=NULL)
{
cout<<"<-"<<s->data;
s=s->next;
}
}
};
int main()
{
int num;
node *start=NULL;
stack s;
int ch;
char c;
do
{
cout<<endl;	
cout<<".......MENU......."<<endl;
cout<<"\t1.Push."<<endl;
cout<<"\t2.Pop."<<endl;
cout<<"\t3.Peep."<<endl;
cout<<"\t4.Peeptop."<<endl;
cout<<"\t5.Exit"<<endl;
cout<<"Enter your choice:";
cin>>ch;
switch(ch)
{
case 1:
{
cout<<"Enter no you want to push in stack:";
cin>>num;
cout<<"The no pushed in stack is:"<<s.push(start,num);
break;
}
case 2:
{
cout<<"The no popped from stack is:"<<s.pop(start);
break;
}
case 3:
{
s.peep(start);
break;
}
case 4:
{
cout<<"The no at the top of stack:"<<s.peeptop(start);
break;
}
case 5: 
exit(0);
default: 
cout<<"Invalid Choice"<<endl;
}  
} while(ch!=4);
 return 0;
}
