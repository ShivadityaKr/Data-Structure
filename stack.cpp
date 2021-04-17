#include<iostream>
using namespace std;
class Stack
{
	public:
	int stack[10];
	int top;
	Stack()
	{
		top=-1;
	}
};
class impstk: Stack
{
	public:
	void push(int data)
	{
		++top;
		stack[top]=data;
	}
	int pop()
	{
		return stack[top--];
	}
	
	bool isEmpty()
	{
		if(top==-1)
		return true;
		else
		return false;
	}
	bool isFull()
	{
		if(top==9)
		return true;
		else
		return false;
	}
	void display()
	{
		if(isEmpty())
		cout<<endl<<"Stack is Empty";
		else
		{
			cout<<"\n----------Stack-----------\n";
			for(int i=0;i<=top;i++)
			{
				cout<<"\nAt "<<i<<" = "<<stack[i];
			}
		}
	}
};
int main()
{

	impstk Stk;

	Stk.push(12);
	Stk.push(11);
	Stk.push(10);
	Stk.display();
	cout<<endl<<"popped "<<Stk.pop();
	Stk.display();
	if(Stk.isEmpty())
	cout<<endl<<"Stack is Empty";
	else
	cout<<endl<<"Stack is Not Empty";
	
}
