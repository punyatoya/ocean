#include<iostream.h>

#define MAX 10


class node
{
	public:
		int data;
		class node *next;
		class node *prev;
};

class dequeue:public node
{
  node *head,*tail;
  int front,rear;    //front and rear is keeping the count of number of elements added at front and at end respectively
  public:
	dequeue()
	{
		front=0;
		rear=0;
		head=NULL;
		tail=NULL;
	}
	void add_at_beg(int element); //insert element at the beginning
	void add_at_end(int element); //insert element in the end
	void del_fr_front(); //remove the first element
	void del_fr_rear(); //remove the last element
	void display(); //display all the elements of the dequeue
	void disp_first(); //display the first element of the queue
	void disp_last(); //display the last element of the queue
};

void dequeue::add_at_beg(int element)
{
	node *temp;

	if(front+rear >= MAX)
	{
	  cout <<"Dequeue overflow";
	  return ;
	}
	else if( front+rear == 0)
	{
	    head = new node;
	    head->data=element;
	    head->next=NULL;
	    head->prev=NULL;
	    tail=head;
	    front++;
	}
	else
	{
	    front++;
	    temp=new node;
	    temp->data=element;
	    temp->next=head;
	    temp->prev=NULL;
	    head->prev=temp;
	    head=temp;
	}
}

void dequeue::add_at_end(int element)
{
	node *temp;

	if(front+rear >= MAX)
	{
	  cout <<"Dequeue overflow";
	  return ;
	}
	else if( front+rear == 0)
	{
	    head = new node;
	    head->data=element;
	    head->next=NULL;
	    head->prev=NULL;
	    tail=head;
	    front++;
	}
	else
	{
	    rear++;
	    temp=new node;
	    temp->data=element;
	    temp->next=NULL;
	    temp->prev=tail;
	    tail->next=temp;
	    tail=temp;
	}

}


void dequeue::del_fr_front()
{
   if(front + rear <= 0)
   {
     cout <<"\nDequeue is empty";
     return;
   }
   else
   {
     head=head->next;
     head->prev=NULL;
     front--;
   }

}

void dequeue::del_fr_rear()
{
	if(front + rear <= 0)
	{
		cout <<"\nDequeue is empty";
		return;
	}
	else
	{
		rear--;
		tail=tail->prev;
		tail->next=NULL;
	}

}

void dequeue::display()
{
   node *temp;
   if(front+rear <= 0)
   {
	cout <<"\nDequeue is empty";
	return ;
   }
   temp=head;
   while(temp!=NULL)
   {
	cout << temp->data <<" ";
    temp=temp->next;
   }
}

void dequeue::disp_first()
{
	if(front+rear <= 0)
	{
		cout <<"\nDequeue is empty";
		return ;
	}
	else
	{
		cout<<"\nThe front element is:"<<head->data;
	}

}

void dequeue::disp_last()
{
	if(front+rear <= 0)
	{
		cout <<"\nDequeue is empty";
		return ;
	}
	else
	{
		cout<<"\nThe last element is:"<<tail->data;
	}

}

void menu(dequeue deq_obj)
{
	int element;
	int ch;
	do
	{
		cout<<"\n DEQUEUE operations:";
		cout<<"\n1.Insert element at the beginning";
		cout<<"\n2.Insert element in the end";
		cout<<"\n3.Remove the first element";
		cout<<"\n4.Remove the last element";
		cout<<"\n5.Display all the elements of queue";
		cout<<"\n6.Display the first element";
		cout<<"\n7.Display the last element";
		cout<<"\n8.Exit";
		cout<<"\nEnter your choice";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter the element:";
				cin>>element;
				deq_obj.add_at_beg(element);
				break;
			case 2:
				cout<<"\nEnter the element:";
				cin>>element;
				deq_obj.add_at_end(element);
				break;
			case 3:
				deq_obj.del_fr_front();
				break;
			case 4:
				deq_obj.del_fr_rear();
				break;
			case 5:
				deq_obj.display();
				break;
			case 6:
				deq_obj.disp_first();
				break;
			case 7:
				deq_obj.disp_last();
				break;
			case 8:
				cout<<"Exit";
				return;
			default:
				cout<<"\nInvalid choice";
				break;
				
		}
	}while(ch!=9);
	
}

int main()
{
	dequeue deq_obj;
	menu(deq_obj);
	return 0;
}