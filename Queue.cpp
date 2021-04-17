#include<iostream>
using namespace std;
class Queue{
	private:
		int front;
		int rear;
		int que[5];
	public:
		Queue(){
			front=0;
			rear=-1;
		}
		bool isFull(){
			if(rear==4)
			return true;
			else
			return false;
		}
		bool isEmpty(){
			if(rear==-1)
			return true;
			else
			return false;
		}
		void enqueue(int data){
			if(isFull())
			cout<<endl<<"Queue is Full";
			else{
			rear++;
			que[rear]=data;
			}
		}
		int dequeue(){
			if(isEmpty())
			cout<<endl<<"Queue is Empty";
			else if(front>= rear){
				front=0;
				rear=-1;
			}
			else{
			int temp=front;
			front++;
			return que[temp];
			}
		}
		void display(){
			for(int i=front;i<=rear;i++)
			cout<<"At "<<i<<" : "<<que[i]<<endl;
		}
};
int main()
{
	cout<<"---------QUEUE----------"<<endl;
	Queue qu;
	qu.enqueue(5);
	qu.enqueue(2);
	qu.enqueue(3);
	qu.enqueue(8);
	
	qu.display();
	cout<<endl<<"dequeue "<<qu.dequeue()<<endl;
	
	qu.display();
}
