#include <iostream.h>
#include <vector>
using namespace std;


template <class T>

class queueee{

private:
	list<T> queue_list;

public:

	bool is_empty();//check if the queue is empty
	T get_queue_size();//get the size of queue
	T head();//returns element present at the front of the queue
	void enqueue(T element);//add element to the queue
	void dequeue();//remove element present at the front of the queue
};
template <class T>
bool queueee<T>::is_empty()
{
    
    return queue_list.empty();
}
template <class T>
void queueee<T>::enqueue(T element) 
{
	queue_list.push_back(element);

}
template <class T>
T queueee<T>::head() 
{
	if(!(is_empty()))
		return queue_list.front();
	else
	{
		cout<<"\nQUEUE is empty";
		return (-1);
	}
}
template <class T>
void queueee<T>::dequeue() 
{
	if(!(is_empty()))
		return queue_list.pop_front();
	else
	{
		cout<<"\nQUEUE is empty";
	}	 
        
}
template <class T>
T queueee<T>::get_queue_size()
{
	if(!(is_empty()))
		return queue_list.size();
	else
	{
		cout<<"\nQUEUE is empty";
		return (-1);
	}

}

int main()
{
   queueee<int> queue1;
   int h1;
   queue1.enqueue(5);
   queue1.enqueue(6);
   queue1.enqueue(8);
   h1=queue1.head();
   if(h1!=(-1))
   {
	  cout<<"\nFront element of the queue="<<h1;
	  cout<<"\n Size of the queue="<<queue1.get_queue_size();
   }
   queue1.dequeue();
   queue1.dequeue();
   h1=queue1.head();
   if(h1!=(-1))
   {
	  cout<<"\nFront element of the queue="<<h1;
	  cout<<"\n Size of the queue="<<queue1.get_queue_size();
   }
   queue1.dequeue();
   h1=queue1.head();
   if(h1!=(-1))
   {
	  cout<<"\nFront element of the queue="<<h1;
	  cout<<"\n Size of the queue="<<queue1.get_queue_size();
   } 
   return 0;
}
