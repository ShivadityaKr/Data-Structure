#include<iostream>
using namespace std;
class Circular_Queue{
	private:
		int front,rear;
		int que[5];
	public:
		Circular_Queue(){
			front=-1;
			rear=-1;
		}
		bool isEmpty(){
			if(rear==-1)
			return true;
			else
			return false;
		}
		bool isFull(){
			if((rear+1)%5== front)
			return true;
			else
			return false;
		}
		void enqueue(int data){
			if(front==-1 && rear==-1){
				front=rear=0;
				que[rear]=data;
			}
			else if(isFull())
			cout<<"\nQueue is Full\n";
			else{
				rear=(rear+1)%5;
				que[rear]=data;
			}
		}
		int dequeue(){
			if(isEmpty())
			cout<<endl<<"Queue is Empty";
			else if(front==rear){
				int tmp=que[front];
				front=rear=-1;
				return tmp;
			}
			else{
				int tmp=que[front];			
				front=(front+1)%5;
				return tmp;
				
			}
		}
		void display(){
			if (isEmpty()) {
     			cout << endl<< "Queue is Empty" << endl;
   			}
			else{
				int i=front;
				while(i!=rear){
					cout<<"At "<<i<<" : "<<que[i]<<endl;
					i=(i+1)%5;
				}
				cout<<"At "<<i<<" : "<<que[i]<<endl;
			}
		}	
		
};
int main()
{
		cout<<"---------CIRCULAR QUEUE----------"<<endl;
	Circular_Queue qu;
	qu.enqueue(1);
	qu.enqueue(2);
	qu.enqueue(3);
	qu.enqueue(4);
	qu.enqueue(5);
	qu.enqueue(6);
	qu.display();
	
	cout<<endl<<"dequeue "<<qu.dequeue()<<endl;
	
	qu.display();
	//now circular queue is start//
	cout<<"\n------------------------\n";
		qu.enqueue(6);
	qu.display();
}
