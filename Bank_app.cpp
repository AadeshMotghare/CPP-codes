/*Construct an Application representing a Bank Account. Include following:
Data Members:
a) Name of the Depositor
b) Account Number
c) Type of Account
d) Balance amount

Member Functions:
a) To assign initial values
b) To deposit an amount
c) To withdraw the amount
d) To display the details of account

Develop a Mini Application using the above details.
*/
 
#include<iostream>
using namespace std;

class Account{
	string name, acc_no, acc_type;   // Declaration of Data members
	double balance;
	
	public:
		void get_data(void);		//Declaration of Member Functions
		void deposit(void);
		void withdraw(void);
		void display(void);
};

//Definitions of Members Functions:

void Account :: get_data(void){         
	cout<<"\n Enter the following details of the Account\n";
	cout<<"\n Enter the Name of Account Holder\n";
	cin>>name;
	cout<<"\n Enter the Account Number\n";
	cin>>acc_no;
	cout<<"\n Enter the Type of account\n";
	cin>>acc_type;
	cout<<"\n Enter the Balance Amount\n";
	cin>>balance;
}

void Account :: display(void){
	cout<<"\n The Details of the Account are as follows:\n";
	cout<<"\n Name \t\t\t:" <<name;
	cout<<"\n Account No.\t\t:" <<acc_no;
	cout<<"\n Type of Account \t:" <<acc_type;
	cout<<"\n Current Balance \t:" <<balance;
}

void Account :: withdraw(void){
	double withdraw_amt;
	
	cout<<"\n Enter the Amount to be withdrawn\n";
	cin>>withdraw_amt;
	
	balance = balance - withdraw_amt;
	cout<<"\n Current Balance \t:" <<balance;
}

void Account ::deposit(void){
	double deposit_amt;
	
	cout<<"\n Enter the amount to be deposited\n";
	cin>>deposit_amt;
	
	balance =balance + deposit_amt;
	cout<<"\n Current Balance \t:" <<balance;
}

int main(){
	int input;
	Account A1;
	char choice ='Y';
	
	while(choice =='Y'){
		cout<<"**************Welcome to Axis Bank*********\n";
		cout<<"--------------------------------------------\n";
		cout<<"\n               MENU:                      \n";
		cout<<"--------------------------------------------\n";
		cout<<"Press 1: To Enter the Details of Account\n";
		cout<<"Press 2: To Display the Account Details\n";
		cout<<"Press 3: To Withdraw an Amount\n";
		cout<<"Press 4: To Deposit an Amount\n";
		cout<<"Press 5: to Exit from the App\n";
		cout<<"--------------------------------------------\n";
		cout<<"\n Enter Your Input\n";
		cin>>input;
		
		switch(input){
			case 1:
				A1.get_data();
				break;
			
			case 2:
				A1.display();
				break;
			
			case 3: 
				A1.withdraw();
				break;
			
			case 4:
				A1.deposit();
				break;
			
			case 5:
				exit(0);
				break;
			
			default:
				cout<<"\n Enter the Valid Input\n";
				break;
		}
		cout<<"\n\n Do you Want Continue....Y/N\n";
		cin>>choice;
	}
	return 0;
}



