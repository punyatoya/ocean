#include <iostream.h>
#include <vector>
using namespace std;


template <class T>

class Queue{

public:
	vector<T> list;
        int front;
        Queue()
        {
            front=0;
        }
	bool empty();  
	void enqueue(T element); 
	T last_element(); 
	T dequeue(); 

};
template <class T>
bool Queue<T>::empty()
{
    
    return list.empty();
}
template <class T>
void Queue<T>::enqueue(T element) 
{
	list.push_back(element);

}
template <class T>
T Queue<T>::last_element() 
{
	if(list.back()>-1)
	return list.back();

	else
		return -1;
}
template <class T>
T Queue<T>::dequeue() 
{
        list[front]=0;
	front++;
        return front;
        
}

int main()
{
   Queue<int> s;
   int t1;
   s.enqueue(5);
   s.enqueue(6);
   s.enqueue(8);
   t1=s.last_element();
   cout<<"last element="<<t1;
   
   t1=s.dequeue();
   cout<<"The front element:"<<s.list[t1];
   t1=s.dequeue();
    
   t1=s.dequeue();
   
   
   return 0;
}