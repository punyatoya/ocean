
#include<iostream>
#include<stack>

using namespace std;

int main() {


	stack<int> stack_obj;

	stack_obj.push(5);
	stack_obj.push(6);

    cout<<"\nstack-size="<<stack_obj.size();
    cout<<"\ntop="<<stack_obj.top();

	stack_obj.push(-1);

	stack_obj.pop();
	stack_obj.pop();

    cout<<"\nstack-size="<<stack_obj.size();
    cout<<"\ntop="<<stack_obj.top();

	stack_obj.pop();

    cout<<"\nstack-size="<<stack_obj.size();
    cout<<"\ntop="<<stack_obj.top();
    
    return 0;
}

Output:

/usr/local/lib/gcc/i686-pc-linux-gnu/4.1.2/../../../../include/c++/4.1.2/bits/stl_stack.h:165:
    error: attempt to access an element in an empty container.

Objects involved in the operation:
sequence "this" @ 0x0xfff1f7e8 {
  type = St5stackIiN15__gnu_debug_def5dequeIiSaIiEEEE;
}

stack-size=2
top=6
stack-size=1
top=5
stack-size=0
Disallowed system call: SYS_kill