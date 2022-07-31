



//Dynamic node Objects  and write the following functions
//get First Element
//get nth Element
//get Last Element
//getLength
//print the Entire Collection of Node Objects




#include<iostream>
#include<conio.h>
using namespace std;
#include<stdlib.h>

struct node
{ 
   node *next;
   int data;
	
};

class Node
{
	node *p,*q,*head;
	int count ;
	public:
		Node()
		{
			p=new node;
			p->data=5;
			p->next=NULL;
			head=p;
		}
		
		void insertnode(int n)
		{	q=new node;
			p=head;
			while(p->next!=NULL)
			{
				p=p->next;
				
			}
			q->data=n;
			q->next=NULL;
			p->next=q;
			
		}
		
		void getfirstelement()
		{
			p=head;
			cout<<"THE FIRST ELEMENT IS : "<<p->data<<"\n";
		}
		
		void getlastelement()
		{
			p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			
			cout<<"THE LAST ELEMENT IS : "<<p->data<<"\n";	
		}
		
		void getnthelement()
		{
			int a;
			cout<<"ENTER THE NUMBER : "<<"\n";
			cin>>a;
			p=head;
			for(int i=1;i<a;i++)
			{
				p=p->next;
			}
			
			cout<<"\n"<<"THE ELEMENT IS : "<<p->data<<"\n";
				
		}
		
		void getlength()
		{	
			count=0;
			p=head;
			while(p!=NULL)
			{	count++;
				p=p->next;
				
			}
			cout<<"\n"<<"THE LENGTH OF NODE IS : "<<count<<"\n";
		}
		
		void show()
		{
			p=head;
			while(p!=NULL)
			{
				cout<<"\n"<<p->data<<"\n";
				p=p->next;
			}
		}
		
		
};

int main()
{	char ch,cha='Y';
	Node obj;
	obj.insertnode(6);
	obj.insertnode(7);
	obj.insertnode(8);
	obj.insertnode(9);
	obj.insertnode(10);
	while(cha !='E')
	{
	
	
	cout<<"\n"<<"ENTER LETTER 'F' IN CAPITAL TO GET FIRST ELEMENT  FROM NODE...!"<<"\n" ;
	cout<<"\n"<<"ENTER LETTER 'L' IN CAPITAL TO GET LAST ELEMENT  FROM NODE...!"<<"\n" ;
	cout<<"\n"<<"ENTER LETTER 'N' IN CAPITAL TO GET NTH ELEMENT OF NODE...! "<<"\n";
	cout<<"\n"<<"ENTER LETTER 'M' IN CAPITAL TO GET LENGTH ELEMENT OF NODE...! "<<"\n";
	
	cout<<"\n"<<"ENTER LETTER 'S' IN CAPITAL TO SHOW ALL NODE...! "<<"\n";
	
	
	ch=getche();
	

	//SWITCH STATEMENT TO CALL FUCNTION 	
	switch(ch)
	{
		case 'F' :
		obj.getfirstelement();	
		break;
		case 'L' :
		obj.getlastelement();	
		break;
		case 'N' :
		obj.getnthelement();	
		break;
		case 'M' :
		obj.getlength();	
		break;
		case 'S' :
		obj.show();	
		break;
		default :
			cout<<"\n"<<"YOU ENTER WRONG LETTER...!  "<<"\n";
			
	}
	cout<<"\n"<<"IF YOU WANT TO CONTINUE PRESS Y AND IF YOU WANT TO EXIT PRESS E...!  "<<"\n";
	cha=getche();
   }
}
