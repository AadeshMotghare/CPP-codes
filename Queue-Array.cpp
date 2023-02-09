/*Queue: Works on First In First Out [FIFO] Principle

insert operation: add an element/data to the end of queue 

front pointer: pointing to the first element of the queue
rear pointer: pointing to the last element of the queue

remove operation: remove an element/data from the start of queue 
*/
#include<iostream>
using namespace std;

void insert(void);
void remove(void);
void display(void); 

int queue[10], size =10, front = -1, rear = -1;
 
int main(){
	int choice;
	do{
		cout<<"\n Queue Operations are as follows:\n";
		cout<<"\n Press1: Insert Press2: Remove Press3: Display Press4:Exit\n";
		cout<<"\n Enter Your Choice\n";
		cin>>choice;
		
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
				remove();
				break;
			case 3:
				display();
				break;
			case 4:
				cout<<"\n Exiting From the Program\n";
				break;
			default:
				cout<<"\n Invalid Input\n";
		}
	}while(choice != 4);
	return 0;
}

void insert(void){
	int val;
	
	if(rear == size-1 ){
		cout<<"\n Queue is Full\n";
	}
	else{
		if(front == -1)
			front = 0;
		cout<<"\n Enter the data to be inserted\n";
		cin>>val;
		rear++;
		queue[rear] = val;
	}
}

void remove(void){
	if(front == -1){
		cout<<"\n Queue is Empty\n";
	}
	else{
		cout<<"\n Data removed from the Queue\t:" <<queue[front] <<endl;
		front++;
	}
}

void display(void){
	int i;
	
	if(front == -1){
		cout<<"\n Queue is Empty\n";
	}
	else{
		cout<<"\n Data in Queue are as follows:\n";
		for(i=front; i<=rear ; i++){
			cout<<queue[i] <<endl;
		}
	}
}


