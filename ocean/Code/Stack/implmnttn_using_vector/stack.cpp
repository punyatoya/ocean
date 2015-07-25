
#include <iostream>
#include <vector>
//Always use one space
using namespace std;
/*
2 spaces
*/
//class name should be proper
//Always in C++
//word1_word2
class stack {
  private:
    //Use Array
  	vector<int> elements;

  public:
  	bool empty(); //checks if stack is empty 
  	int size();//gets the size of the stack
  	void push(int element); //adds element to stack
  	int top(); //returns element at top of stack
  	void pop(); //removes element at top of stack
};

bool stack::empty() {
	return elements.empty();
}

void stack::push(int element) {
	elements.push_back(element);
}

int stack::top() {
		return elements.back();
}

void stack::pop() {
	if(!empty()) {
		elements.pop_back();
  } 
}

int stack::size() {
	return elements.size();
}

void print_stack_size(stack stack_obj) {
  if(!stack_obj.empty()) { 
       cout <<"\n size of the stack="<<stack_obj.size();
       cout <<"\n top="<<stack_obj.top();
   }else {
       cout <<"\n Stack is empty";
   }
}

int main()
{
   stack stack_obj;

   stack_obj.push(5);
   stack_obj.push(6);
   stack_obj.push(-1);
   print_stack_size(stack_obj);

   stack_obj.pop();
   stack_obj.pop();
   print_stack_size(stack_obj);

   stack_obj.pop();
   print_stack_size(stack_obj);

   return 0;
}


