
#include <iostream.h>
#include <vector>

using namespace std;


//Comment 1: class name should be lowercase for e.g vector that you are using
class Stack{

private:
	vector<int> list;

public:
	bool empty(); //checks if stack is empty 
	void push(int element); //adds element to stack
	int top(); //returns element at top of stack
	void pop(); //removes element at top of stack

   //Comment 2: Refer this link for all operations
   https://en.wikibooks.org/wiki/Data_Structures/Stacks_and_Queues
};
//Comment 3: Proper spacing
bool Stack::empty()
{
    //Comment 4: Refer Comment 3
    return list.empty();
}

void Stack::push(int element) 
{
	list.push_back(element);

}

int Stack::top() 
{
   //Comment 5: This looks like a bug wat exactly you are trying to do here
	if(list.back()>-1)
	return list.back();

	else
		return -1;
}

//Comment 5: Refer Comment 3
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
   t1=s.top();//poper naming of variable
   cout<<"top of element="<<t1;
   
   s.pop();
   s.pop();
   s.pop();

   //Not a good test for checking you functionsa and not testes empty function here.

   return 0;
}