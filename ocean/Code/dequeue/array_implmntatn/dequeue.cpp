#include <iostream.h>

#define MAX 10


class dequeue
{
	private:
		int deq_arr[MAX];
		int front;
		int rear;
		int count;
	public:
		dequeue();
		void add_at_beg(int element);
		void add_at_end(int element);
		void del_fr_front();
		void del_fr_rear();
		void display();
		void disp_first();
		void disp_last();
};

dequeue::dequeue()
{
	front=-1;
	rear=-1;
	count=-1;
}

void dequeue::add_at_beg(int element)
{
	int i;
	if(front == -1)
	{
		front++;
		rear++;
		deq_arr[rear]=element;
		count++;
	}
	else if(rear == MAX-1)
	{
		cout<<"Queue overflow";
	}
	else
	{
		for(i=count;i>=0;i++)
		{
			deq_arr[i]=deq_arr[i-1];
		}
		deq_arr[i]=element;
		count++;
		rear++;
	}
}

void dequeue::add_at_end(int element)
{
	if(front == -1)
	{
		front++;
		rear++;
		deq_arr[rear]=element;
		count++;
	}
	else if(rear == MAX-1)
	{
		cout<<"\nQUEUE OVERFLOW";
	}
	else
	{
		deq_arr[++rear]=element;
	}
}

void dequeue::display()
{
	int i;
	cout<<"\nThe elements of the queue are:";
	for(i=front;i<=rear;i++)
	{
		cout<<deq_arr[i];
	}
}

void dequeue::del_fr_front()
{
	if(front == -1)
	{
		cout<<"\nQueue is empty";
		return;
	}
	else
	{
		if(front == rear)
		{
			front=rear=-1;
			return;
		}
		cout<<"The deleted element from front:"<<deq_arr[front];
		front++;
	}
}

void dequeue::del_fr_rear()
{
	if(front == -1)
	{
		cout<<"\nQueue is empty";
	}
	else
	{
		if(front == rear)
		{
			front=rear=-1;
			return;
		}
		cout<<"The deleted element from the end:"<<deq_arr[rear];
		rear--;
	}
}


void dequeue::disp_first()
{
	if(front == -1)
	{
		cout<<"Queue is empty";
	}
	else
	{		
		cout<<"\nThe first element of the queue:"<<deq_arr[front];
	}
}

void dequeue::disp_last()
{
	if(front == -1)
	{
		cout<<"Queue is empty";
	}
	else
	{		
		cout<<"\nThe last element of the queue:"<<deq_arr[rear];
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
