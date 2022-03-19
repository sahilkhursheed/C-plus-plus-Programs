#include<iostream>
using namespace std;
#define max 10
#define lstack node
class stack
{
	int top;
	int a[max];
	public:
		stack()
		{
			top=-1;
		}
		int push(int x)
		{
			if(top>max-1)
			{
			cout<<"stack overflow."<<endl;
			return 0;
		    }
			else
			{
			a[++top]=x;
			return x;
		    }
		}
		int pop()
		{
			if(top==-1)
			{
				cout<<"stack underflow"<<endl;
			}
			int x;
			x=a[top--];
			return x;
		}
		void dis()
		{
			for(int i=top;i>=0;i--)
			{
				cout<<a[i]<<endl;
			}
		}
	}s;
	

	class lstack
	{
		int data;
		node *next;
		public:
			int push(node* &start,int num)
			{
				
				
				node *top=new node();
				top->data=num;
				top->next=start;
				start=top;
				return top->data;
			    
			}
			int pop(node* &start)
			{
				if(start==NULL)
				{
					cout<<"Stack is empty:"<<endl;
				}
				node *temp=new node();
				temp=start;
				start=start->next;
				return temp->data;
				delete temp;
			}
			void disp(node *s)
			{
				cout<<"NULL";
				
				while(s!=NULL)
				{
					cout<<"<-"<<s->data;
					s=s->next;
				}
			}
		}ls;
	#define qsize 10
	class queue
	{
		int rear,front;
		int q[qsize];
		public:
			queue()
			{
				front=-1;
				rear=-1;
			}
			int insert(int x)
			{
				if(rear==qsize-1)
				{
					cout<<"Queue is full:"<<endl;
					return 0;
				}
				else
				{
					if(front==-1)
					{
						front=0;
					}
					
					
						q[++rear]=x;
						return x;
					
				}
			}
			void deletefr()
			{
				if(front==-1||front>rear)
				{
					cout<<"Queue is Empty."<<endl;
				}
				else
				{
					cout<<"The deleted element is:"<<q[front];
					front++;
				}
			}
			void disp()
			{
				for(int i=front;i<=rear;i++)
				{
					cout<<q[i]<<"<<==";
				}
			}
		}q;
		
		#define lqueue node1
		class lqueue
		{
			int data;
			node1 *next;
			public:
				int insert(node1* &start,int num)
				{
					if(start==NULL)
					{
					start=new node1();
					start->data=num;
					start->next=NULL;
				    }
				else
				{
					node1 *s=start;
					while(s->next!=NULL)
					{
						s=s->next;
					}
						s->next=new node1();
						s->next->data=num;
						s->next->next=NULL;
					}
				}
				int deletefr(node1 * &start)
				{
					node1* temp=new node1();
					temp=start;
					start=start->next;
					return temp->data;
					delete temp;
				}
				void disp(node1 *s)
				{
					while(s!=NULL)
					{
						cout<<s->data<<"<<==";
						s=s->next;
					}
				}
			}lq;
					
					
				
				
				
		
				
				
			
				
		
	
	void array_stack()
	{
		int ch;
		int num;
		char c;
		do
		{
			system("cls");
			cout<<"........Menu........."<<endl;
			cout<<"\t1.Push."<<endl;
			cout<<"\t2.Pop."<<endl;
			cout<<"\t3.Display."<<endl;
			cout<<"\n\nEnter your choice:";
			cin>>ch;
			switch(ch)
			{
				case 1:
					{
					cout<<"Enter no you want to enter in stack:"<<endl;
					cin>>num;
					cout<<"\nThe no pushed in stack is:"<<s.push(num)<<endl;
					break;
				   }
				   case 2:
				   	{
				   		cout<<"The element poped from stack is:"<<s.pop();
				   		break;
				   	}
				   	case 3:
				   		{
				   			s.dis();
				   			break;
				   		}
				   	}
				   	cout<<"\nDo you want to continue(y/n):";
				   	cin>>c;
				   }while(c=='y'||c=='Y');
	}
	void link_stack()
	{
		node* start=NULL;
		int num,ch;
		char c;
		do
		{
			system("cls");
			cout<<"...........MENU..........."<<endl;
			cout<<"\t1.Push."<<endl;
			cout<<"\t2.Pop."<<endl;
			cout<<"\t3.Display."<<endl;
			cout<<"\n\nEnter your choice:";
			cin>>ch;
			switch(ch)
			{
				case 1:
					{
					cout<<"Enter No you want to push:"<<endl;
					cin>>num;
					cout<<"\nThe no pushed in stack is:"<<ls.push(start,num)<<endl;
					break;
				    }
				    case 2:
				    	{
				    		cout<<"The no poped from stack is:"<<ls.pop(start)<<endl;
				    		break;
				    	}
				    	case 3:
				    		{
				    			ls.disp(start);
				    			break;
				    		}
				    	}
				    	cout<<"\n\nDo you want to continue(y/n):";
				    	cin>>c;
				    }while(c=='y'||c=='Y');
				}
			
					
	
		
	void stack_menu()
	{
		int ch;
		char c;
		do
		{
			system("cls");
			
			cout<<"........Stack Menu......."<<endl;
			cout<<"\t1.Array representation."<<endl;
			cout<<"\t2.Linked list representation."<<endl;
			
			cout<<"\n\nEnter your choice:";
			cin>>ch;
			switch(ch)
			{
				case 1:
					array_stack();
					break;
					case 2:
						link_stack();
						break;
		    }
		    cout<<"\n\nDo you want to stay at stack menu(y/n):";
		    cin>>c;
		}while(c=='y'||c=='Y');
	}
	
	void array_queue()
	{
		int ch,num;
		char c;
		do
		{
			system("cls");
			cout<<"...........MENU..........."<<endl;
			cout<<"\t1.Insert at rear."<<endl;
			cout<<"\t2.Delete from top."<<endl;
			cout<<"\t3.Display."<<endl;
			cout<<"\n\nEnter your choice:";
			cin>>ch;
			switch(ch)
			{
				case 1:
					{
						cout<<"Enter element you want to insert in queue:";
						cin>>num;
						cout<<"\nThe inserted element is:"<<q.insert(num);
						break;
					}
					case 2:
						{
							q.deletefr();
							break;
						}
						case 3:
							{
								q.disp();
								break;
							}
						}
						cout<<"\n\nDo you want to continue(y/n):";
						cin>>c;
					}while(c=='y'||c=='Y');
				}
				
	void link_queue()
	{
		int num,ch;
		char c;
		node1* start=NULL;
		do
		{
			system("cls");
		cout<<".........Menu........."<<endl;
		cout<<"\t1.Insert at rear."<<endl;
		cout<<"\t2.Delete from front."<<endl;
		cout<<"\t3.Display."<<endl;
		cout<<"\n\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					cout<<"Enter no you want to insert at rear:";
					cin>>num;
					
					lq.insert(start,num);
					break;
				}
				case 2:
					{
						cout<<"The Deleted element is:"<<lq.deletefr(start);
						break;
					}
					case 3:
						{
							lq.disp(start);
							break;
						}
					}
					cout<<"\n\nDo you want to continue(y/n):";
					cin>>c;
				}while(c=='y'||c=='Y');
			}
	
	void queue_menu()
	{
		int ch;
		char c;
		do
		{
			
			system("cls");
			cout<<"...........QUEUE MENU............"<<endl;
			cout<<"\t1.Array representation."<<endl;
			cout<<"\t2.Linked list representation."<<endl;
			cout<<"\n\nEnter your choice:";
			cin>>ch;
			switch(ch)
			{
				case 1:
					{
						array_queue();
						break;
					}
					case 2:
						{
							link_queue();
							break;
						}
							
				}
				cout<<"\n\nDo you want to stay at queue menu(y/n):";
				cin>>c;
			}while(c=='y'||c=='Y');
		}
			
		    
						
			
			
			
	int main()
	{
		int ch,num;
		char c;
		do
		{
			system("cls");
			cout<<"..........MAIN MENU............"<<endl;
			cout<<"\t1.STACK."<<endl;
			cout<<"\t2.QUEUE."<<endl;
			cout<<"\t3.Exit."<<endl;
			cout<<"\n\nEnter your choice:";
			cin>>ch;
			switch(ch)
			{
				case 1:
					{
					stack_menu();
					break;
				    }
				    case 2:
				    	queue_menu();
				    	break;
				    case 3:
				    	exit(0);
				    	
			}
			cout<<"\n\nDo you want to stay at Main Menu(y/n):";
			cin>>c;
		}while(c=='y'||c=='Y');
		return 0;
	}
			
					
		
