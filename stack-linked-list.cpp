//Implementation of Stack using Linked list:
#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};
Node* top = NULL;

void push(void);
void pop(void);
void display(void);

int main(){
	int choice=0;
	
	do{
		cout<<"\n List of Stack Operations:\n";
		cout<<"\n Press 1: PUSH\n";
		cout<<"\n Press 2: POP\n";
		cout<<"\n Press 3: Display\n";
		cout<<"\n Press 4: Exit\n";
		cout<<"\n Enter Your Choice\n";
		cin>>choice;
		
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				cout<<"\n Exited Successfully from the Application\n";
				break;
			default:
				cout<<"\n Invalid Input\n";
		}
	}while(choice >0 && choice<=3);
	
	return 0;
}

void push(){
	int element;
	
	cout<<"\n Enter the Element of Stack\n";
	cin>>element;
	
	Node* newnode = new Node;
	newnode->data = element;
	newnode->next = top;
	top = newnode;
}

void pop(){
	if(top == NULL){
		cout<<"\n Stack is Empty\n";
	}
	else{
		cout<<"\n Element removed from the Stack\t:" <<top->data <<endl;
		top = top->next;
	}
}

void display(){
	Node* ptr;
	
	if(top == NULL){
		cout<<"\n Stack is Empty\n";
	}
	else{
		ptr = top;
		cout<<"\n Elements of Stack are as follows:\n";
		while(ptr!=NULL){
			cout<<ptr->data <<endl;
			ptr = ptr->next;
		}
	}
}


