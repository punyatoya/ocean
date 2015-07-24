
#include <iostream>
#include <vector>
//Always use space
using namespace std;



class stackkk{

private:
	vector<int> stack_list;

public:
	bool is_empty(); //checks if stack is empty 
	int get_stack_size();//gets the size of the stack
	void push(int element); //adds element to stack
	int top(); //returns element at top of stack
	void pop(); //removes element at top of stack

};
bool stackkk::is_empty()
{
	return stack_list.empty();
}

void stackkk::push(int element) 
{
	stack_list.push_back(element);
}

int stackkk::top() 
{
	if(!(is_empty()))
		return stack_list.back();
	else
	{
		cout<<"\nSTACK IS EMPTY";
                return (-1);
	}
}
void stackkk::pop() 
{
	if(!(is_empty()))
		stack_list.pop_back();
	else
        {
		cout<<"\nSTACK IS EMPTY";
        }
}
int stackkk::get_stack_size()
{
	if(!(is_empty()))
		return stack_list.size();
	else
	{
		cout<<"\nSTACK IS EMPTY";
                return (-1);
	}
}
int main()
{
   stackkk stack1;
   int top1;
   stack1.push(5);
   stack1.push(6);
   stack1.push(8);
   top1=stack1.top();
   if(top1!=(-1))
   { 
       cout<<"\ntop of element="<<top1;
       cout <<"\n size of the stack="<<stack1.get_stack_size();
   }
   stack1.pop();
   stack1.pop();
   top1=stack1.top();
   if(top1!=(-1))
   { 
       cout<<"\ntop of element="<<top1;
       cout <<"\n size of the stack="<<stack1.get_stack_size();
   }
   stack1.pop();
   top1=stack1.top();
   if(top1!=(-1))
   { 
       cout<<"\ntop of element="<<top1;
       cout <<"\n size of the stack"<<stack1.get_stack_size();
   }
   return 0;
}
