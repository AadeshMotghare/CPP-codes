#include<iostream>
using namespace std;

int main(){
	int num;
	char choice;
	
	do{
		cout<<"\n Enter Any Number\n";
		cin>>num;
		
		if(num%2 == 0){
		
			cout<<"\n Entered Number is an EVEN Number\n";
		}
		else{
			cout<<"\n Entered Number is an ODD Number\n";
		}
		
		cout<<"\n Do you wish to enter other number Y/N"<<endl;
		cin>>choice;
	}while(choice == 'Y'||'y');
	
	return 0;
}

