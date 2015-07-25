#include<iostream>

#define MAX 5

using namespace std;

class stack
{
            int stack_elements[MAX];
      public:
            int top;
            stack()
            {
                top=-1;
            }
            void push(int element);
			void pop();
			void display();
			int top_element();
			int size();
			bool empty()
			{
				if(top == -1)
				{
					cout<<"stack is empty";
					return true;
				}
				else
				{
					return false;
				}
				
			}
			bool full()
			{
				if(top == MAX-1)
				{
					cout<<"stack is full";
					return true;
				}
				else
				{
					return false;
				}
				
			}
			
};

 
void stack::push(int element) 
{
	if(!full())
	{
		stack_elements[++top]=element;
	}
}

void stack::pop()
{
    if(!empty())
    {
		stack_elements[top--];
	}
}

void stack::display()
{
	int i;
	cout<<"\n";
    for(i=top;i>=0;i--)
    {
    	cout <<stack_elements[i] <<" ";
    }
}

int stack::top_element()
{
	return stack_elements[top]; 
}

int stack::size()
{
	return top+1;
}

void print_size_top(stack stack_obj)
{
	if(!stack_obj.empty())
	{
		cout<<"\n Stack size="<<stack_obj.size();
		cout<<"\n Top="<<stack_obj.top_element();
	}
}

int main()
{
    
    stack stack_obj;
	int element;
	
	stack_obj.push(1);
	stack_obj.push(2);
	
	print_size_top(stack_obj);
	
	stack_obj.push(-1);
	stack_obj.display();

	stack_obj.pop();
	
	print_size_top(stack_obj);
	
	stack_obj.pop();
	stack_obj.pop();

        
    print_size_top(stack_obj);
	return (0);
}