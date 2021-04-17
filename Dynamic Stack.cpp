#include<iostream>
using namespace std;

class node
{
	public:
    int data;
    node *top;
};

class Stack : node
{
private:
    node *head,*tail;
public:
    Stack()
    {
        head = NULL;
        tail = NULL;
    }

    void push(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->top = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->top = tmp;
            tail = tail->top;
        }
    }
    void display()
    {
    	node *tmp1;
    	tmp1 = head;
    	while(tmp1)
		{
			cout<<" "<<tmp1->data;
			tmp1= tmp1->top;
		}
	}
    int pop(){
    	int temp;
    	node *tmp2;
    	tmp2 = tail;
    	delete tmp2;
    	return temp;
	}
};
int main()
{
	Stack st;
	st.push(10);
	st.push(12);
	st.push(13);
	st.display();
//	cout<<"\npopped "<<st.pop();
//	st.display();
	
}
