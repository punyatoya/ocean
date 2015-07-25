
#include<iostream>

#define MAX 5

using namespace std;

class queue
{
            int queue_elements[MAX];
      public:
      		int front,rear;
            queue()
            {
                front=-1;
                rear=-1;
            }
            void enqueue(int element);
			void dequeue();
			void display();
			int front_element();
			int size();
			bool empty()
			{
				if(front == rear+1)
				{
					cout<<"\nqueue is empty";
					return true;
				}
				else
				{
					return false;
				}
				
			}
			bool full()
			{
				if(rear == MAX-1)
				{
					cout<<"\nqueue is full";
					return true;
				}
				else
				{
					return false;
				}
				
			}
			
};

 
void queue::enqueue(int element) 
{
	if(!full())
	{
		queue_elements[++rear]=element;
		if(front==-1)
		{
			front=0;
		}
	}
}

void queue::dequeue()
{
    if(!empty())
    {
		queue_elements[++front];
    }
}

void queue::display()
{
	int i;
	cout<<"\n";
	if(!empty())
	{
    	for(i=front;i<=rear;i++)
    		cout <<queue_elements[i] <<" ";
    }
}

int queue::front_element()
{
	return queue_elements[front]; 
}

int queue::size()
{
	int count=0,i;
        for(i=front;i<=rear;i++)
            count++;
        return count;
}

void print_size_front(queue queue_obj)
{
	if(!queue_obj.empty())
	{
		cout<<"\n queue size="<<queue_obj.size();
		cout<<"\n front="<<queue_obj.front_element();
	}
}

int main()
{
    
    queue queue_obj;
	int element;
	
	queue_obj.enqueue(1);
	queue_obj.enqueue(2);
	
	print_size_front(queue_obj);
	
	queue_obj.enqueue(-1);

	queue_obj.diaplay();

	queue_obj.dequeue();
	
	print_size_front(queue_obj);
	
	queue_obj.dequeue();
    print_size_front(queue_obj);
	queue_obj.dequeue();

    print_size_front(queue_obj);
    

	return (0);
}




OUTPUT:

queue size=2
 front=1
1 2 -1 
 queue size=2
 front=2
 queue size=1
 front=-1
queue is empty