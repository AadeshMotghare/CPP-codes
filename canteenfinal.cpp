//PRACTICAL 10-CANTEEN PROJECT
//NAME-AKASH TIWARI
//ROLL NO-10
#include<iostream>
#include<string.h>
using namespace std;
class menu{
		char name[5][20];
	    int	price[5];
	public:
		void give_price(){
		char name[5][20]={"pizza","pavbhaji","noodles","coffee","chai"};
	    int	price[5]={250,150,100,50,25};
		}
	void display(){
		cout<<"********************* MENU ********************"<<endl;
		for(int i=0;i<5;i++)
		cout<<name[i][20]<<"\t\t\t\t\t"<<price[i]<<"/-"<<endl;
	}	
};
int main(){
	menu m;
	m.display();	
}
