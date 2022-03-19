#include <iostream>
using namespace std;
#define MAX 100
class stack
{
	int data[MAX];
	int top;
	public:
		stack()
		{
			top=-1;
		}
		void push(int val);
		void pop();
		void peep();
} s;
void stack:: push(int val) 
{
   if(s.top>=MAX-1)
      cout<<"Stack Overflow"<<endl; 
   else 
      s.data[++s.top]=val;

}
void stack::pop() 
{
   if(s.top<=-1)
      cout<<"Stack Underflow"<<endl;
   else 
      cout<<"The popped element is "<<s.data[s.top--] <<endl; 
}
void stack :: peep() 
{
   if(s.top>=0) 
   {
      cout<<"Stack elements are:";
      for(int i=s.top; i>=0; i--)
         cout<<s.data[i]<<" ";
         cout<<endl;
   } 
   else
      cout<<"Stack is empty";
}
int main() 
{
   int ch, val;
   stack b; 
do 
{
	cout<<"........MENU......."<<endl;
    cout<<"\t1.Push in stack"<<endl;
    cout<<"\t2.Pop from stack"<<endl;
    cout<<"\t3.Display stack"<<endl;
    cout<<"\t4.Exit"<<endl;
    cout<<"Enter choice:  ";
    cin>>ch;
    switch(ch) 
	{
    case 1: 
		{   
        cout<<"Enter value to be pushed:"<<endl;
        cin>>val;
        cout<<endl;
        b.push(val);
        break;
        }
    case 2: 
        b.pop();
        break;
    case 3: 
        b.peep();
        break;
    case 4: 
		exit(0);
    default: 
        cout<<"Invalid Choice"<<endl;
   }
   
} while(ch!=4);
 
    return 0;
}
