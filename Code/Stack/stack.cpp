#include <iostream.h>
#include <vector>
using namespace std;

class Stack{

private:
	vector<int> list;

public:
	bool empty(); //checks if stack is empty 
	void push(int element); //adds element to stack
	int top(); //returns element at top of stack
	void pop(); //removes element at top of stack

};
bool Stack::empty()
{
    
    return list.empty();
}

void Stack::push(int element) 
{
	list.push_back(element);

}

int Stack::top() 
{
	if(list.back()>-1)
	return list.back();

	else
		return -1;
}
void Stack::pop() 
{
	list.pop_back();
}

int main()
{
   Stack s;
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