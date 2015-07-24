
#include<iostream>
#include<stack>

using namespace std;

int arr[1000000];

class queue {
	
	stack<int> stack_first;
	stack<int> stack_second;

	int front();
	void push(int element);
	bool empty();
}


int main() {

	int arr[1000000];

	stack<int> stack_obj;

	stack_obj.push(5);
	stack_obj.push(6);
	stack_obj.push(-1);
	print_stack_size(stack_obj);

	stack_obj.pop();
	stack_obj.pop();
	print_stack_size(stack_obj);

	stack_obj.pop();
	print_stack_size(stack_obj);
}

