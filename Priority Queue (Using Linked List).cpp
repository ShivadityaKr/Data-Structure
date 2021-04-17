#include<iostream>
#include<conio.h>
using namespace std;
class Node{
	public:
	int data;
	int priority;
	Node *next;
};
class PQueue : Node{
	public:
		Node *front;
		PQueue(){
			front=NULL;
		}
		void enqueue(int data,int p){
			Node *tmp,*rear,*prev;
			tmp = new Node;
			tmp->data=data;
			tmp->priority=p;
			tmp->next=NULL;
			if(front==NULL)
			front=tmp;
			else{
				rear=front;
				while(rear!=NULL && rear->priority<=p) {
				prev=rear;
				rear=rear->next;	
				}
				prev->next=tmp;
				tmp->next=rear;
			
				
			}
			cout<<"\nEnqueue..";
		}
		void display(){
			Node *ptr;
			ptr=front;
			if(ptr==NULL)
			cout<<"\nQueue is Empty\n";
			else{
				cout<<"\n-----------Priority Queue--------\n";
				while(ptr!=NULL){
					cout<<" "<<ptr->data;
					ptr=ptr->next;
			
				}
			}
		}
};
int main(){
	PQueue pq;
	pq.enqueue(12,1);
	pq.enqueue(13,2);
	pq.enqueue(14,1);
//	pq.enqueue(15,5);
//	pq.enqueue(17,3);
//	pq.enqueue(18,1);
	
	pq.display();
}
