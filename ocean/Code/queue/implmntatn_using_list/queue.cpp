#include <iostream.h>
#include <list>

using namespace std;


template <class T>

class queue{

private:
	list<T> queue_list;

public:

	bool empty();//check if the queue is empty
	T get_queue_size();//get the size of queue
	T head();//returns element present at the front of the queue
	void enqueue(T element);//add element to the queue
	void dequeue();//remove element present at the front of the queue
};

template <class T>
bool queue<T>::empty()
{
    
    return queue_list.empty();
}

template <class T>
void queue<T>::enqueue(T element) 
{
	queue_list.push_back(element);

}

template <class T>
T queue<T>::head() 
{
	return queue_list.front();
}

template <class T>
void queue<T>::dequeue() 
{
	if(!empty())
	{
		 queue_list.pop_front();
	}
}

template <class T>
T queue<T>::get_queue_size()
{
	
	return queue_list.size();

}

void print_size_front(queue queue_obj)
{
	if(!queue_obj.empty()){
		cout<<"\nSize queue:"<<queue_obj.size();
		cout<<"\nTop:"<<queue_obj.head();
	}
	else
	{
		cout<<"\nStack is empty";
	}
}

int main()
{
   queueee<int> queue_obj;
   queue_obj.enqueue(5);
   queue_obj.enqueue(6);
   queue_obj.enqueue(8);

   print_size_front(queue_obj);
   
   queue_obj.dequeue();
   queue_obj.dequeue();


   print_size_front(queue_obj);
   
   queue_obj.dequeue();
   
   print_size_front(queue_obj);

   return 0;
}
