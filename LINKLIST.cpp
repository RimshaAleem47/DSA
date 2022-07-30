

///Make a Linked List as per the class instructions.
//constructor / parameterized constructor
//isEmpty
//insertAtbeginning
//insertAtLast
//removeFromBeginning
//removeFromLast
//getLength
//getFirstElement  
//getLastElement
//print All the Elements of the LinkedList

#include<iostream>

using namespace std;
#include<conio.h>


#include<stdlib.h>



// using structure to made link list
struct linklist
{
	int data;
	linklist *link;
	
};

// defining a class 

class link
{
	private:
		linklist *p,*q,*head;
		int count;
		
		public:
			
			// constructor
			
		link()
		{
 			p=new linklist;
 			p->data=1;
			p->link= NULL;
			head=p;
			
		}
		
		
		// FUNCTION TO GIVE HAD VALUE TO LINKLISTS
		void insert(int a)
		{
				q= new linklist;
				p=head;
				while(p->link != NULL)
				{
					p=p->link;
					
				}
				q->data= a;
				
				q->link= NULL;
				p->link=q;
				
			
		}
		
		void insertatbegeninng()
		{
			q=new linklist;
			p=head;
			cout<<"\n"<<"ENTER THE VALUE FOR LINKLIST : ";
			cin>>q->data;
			q->link=p;
			head=q;
			cout<<"\n"<<"NODE IS INSERTED SUCCESSFULLY"<<"\n";
		}
		
		void insertatlast()
		{
			q=new linklist;
			p=head;
			cout<<"\n"<<"ENTER THE VALUE FOR NEW LINKLIST : "; 
			cin>>q->data;
			while(p->link!=NULL)
			{
				p=p->link;
			}
			q->link=NULL;
			p->link=q;
			cout<<"\n"<<"NODE IS INSERTED SUCCESSFULLY"<<"\n";
			
		}
		 
		void removefrombegenning()
		{
			p=head;
			head=p->link;
			delete p;
			cout<<"\n"<<"NODE IS REMOVED SUCCESSFULLY"<<"\n";
		}
		
		
		void removefromlast()
		{
			p=head;
			while(p->link!=NULL)
			{
				q=p;
				p=p->link;
			}
			q->link=NULL;
			delete p;
			cout<<"\n"<<"NODE IS REMOVED SUCCESSFULLY"<<"\n";
		}
		
		void getfirstelement()
		{
			p=head;
			cout<<"\n"<<"FIRST ELEMENT IS : "<<p->data<<"\n";
		}
		void getlastelement()
		{
			p=head;
			while(p->link!=NULL)
			{
				p=p->link;
			}
			cout<<"\n"<<"LAST ELEMENT IS : "<<p->data <<"\n";
		}
		
		void getlength()
		{	
			count=0;
			p=head;
			while(p!=NULL)
			{
				count++;
				p=p->link;
			}
			cout<<"\n"<<"THE TOTAL NUMBER OF LINLIST IS : "<<count<<"\n";
		}
		void empty()
		{
			p=head;
			while(p->link!=NULL)
			{
				p=p->link;
			}
			
			cout<<"\n"<<"THE LINK PART OF "<<p->data<<" LIST IS EMPTY."<<"\n";
			
		}
		void show()
		{
				p=head;
				cout<<"\n"<<"THE LINK LIST ARE : "<<"\n";
		while(p!= NULL)
			{
				
			    cout<<"\n"<<p->data<<"\n";
				p=p->link;
				//cout<<"testing";
			}
		
		}
		
		
		
		
		
		
};

int main()
{	char ch,cha;

	link obj1;
	obj1.insert(2);
	obj1.insert(3);
	obj1.insert(4);
	obj1.insert(5);
	obj1.insert(6);
	obj1.insert(7);
	obj1.insert(8);
	obj1.insert(9);
	obj1.insert(10);
	obj1.insert(11);
	
	while(cha !='E')
	{
	
	cout<<"\n"<<"ENTER LETTER 'F' IN CAPITAL TO INSERT A LINKLIST IN BEGGENNING...!"<<"\n" ;
	cout<<"\n"<<"ENTER LETTER 'L' IN CAPITAL TO INSERT A LINKLIST IN LAST...!"<<"\n" ;
	cout<<"\n"<<"ENTER LETTER 'D' IN CAPITAL TO REMOVE A LINKLIST FROM BEGGENNING...!"<<"\n" ;
	cout<<"\n"<<"ENTER LETTER 'R' IN CAPITAL TO REMOVE A LINKLIST FROM LAST...!"<<"\n" ;
	cout<<"\n"<<"ENTER LETTER 'P' IN CAPITAL TO GET FIRST ELEMENT  FROM LIST...!"<<"\n" ;
	cout<<"\n"<<"ENTER LETTER 'Q' IN CAPITAL TO GET LAST ELEMENT  FROM LIST...!"<<"\n" ;
	cout<<"\n"<<"ENTER LETTER 'N' IN CAPITAL TO SHOW LENGTH OF LINKLIST...! "<<"\n";
	cout<<"\n"<<"ENTER LETTER 'M' IN CAPITAL TO CHECK WHICH LINK PART OF LINKLIST IS EMPTY...! "<<"\n";
	cout<<"\n"<<"ENTER LETTER 'S' IN CAPITAL TO SHOW ALL LINKLIST...! "<<"\n";
	
	
	ch=getche();
	

	//SWITCH STATEMENT TO CALL FUCNTION 	
	switch(ch)
	{
		case 'F' :
		obj1.insertatbegeninng();	
		break;
		case 'L' :
		obj1.insertatlast();	
		break;
		case 'D' :
		obj1.removefrombegenning();	
		break;
		case 'R' :
		obj1.removefromlast();	
		break;
		case 'P' :
		obj1.getfirstelement();	
		break;
		case 'Q' :
		obj1.getlastelement();	
		break;
		case 'N' :
		obj1.getlength();	
		break;
		case 'M' :
		obj1.empty();	
		break;
		case 'S' :
		obj1.show();	
		break;
		default :
			cout<<"\n"<<"YOU ENTER WRONG LETTER...!  "<<"\n";
			
	}
	cout<<"\n"<<"IF YOU WANT TO CONTINUE PRESS Y AND IF YOU WANT TO EXIT PRESS E...!  "<<"\n";
	cha=getche();
   }
	
	
	

}
