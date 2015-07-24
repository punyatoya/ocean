#include <iostream.h>
#include <vector>
using namespace std;


template <class T>

class Stack{

private:
	vector<T> list;

public:
	bool empty(); //checks if stack is empty 
	void push(T element); //adds element to stack
	T top(); //returns element at top of stack
	void pop(); //removes element at top of stack

};
template <class T>
bool Stack<T>::empty()
{
    
    return list.empty();
}
template <class T>
void Stack<T>::push(T element) 
{
	list.push_back(element);

}
template <class T>
T Stack<T>::top() 
{
	if(list.back()>-1)
	return list.back();

	else
		return -1;
}
template <class T>
void Stack<T>::pop() 
{
	list.pop_back();
}

int main()
{
   Stack<int> s;
   int t1;
   s.push(5);
   s.push(6);
   s.push(8);
   t1=s.top();
   cout<<"top of element="<<t1;
   
   s.pop();
   s.pop();
   s.pop();
   return 0;
}