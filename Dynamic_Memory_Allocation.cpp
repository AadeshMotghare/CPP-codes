//Dynamic Memory Allocation using Constructors:
//using Constructor Overloading:
//WAP to print the Return Amount from a Fixed Deposit after given period of time.
#include<iostream>
using namespace std;

class Fixed_Deposit{
	long int P_amount;
	int Years;
	float Rate;
	float Return_amt;
	
	public:
		Fixed_Deposit(long int p, int y, float r);   //Declaration of Constructor1
		Fixed_Deposit(long int p, int y, int r);	//Declaration of Constructor2
		void Display(void);
};

Fixed_Deposit::Fixed_Deposit(long int p, int y, float r){  //Definition of Constructor1
	P_amount = p;
	Years = y;
	Rate = r;
	
	Return_amt = P_amount;
	for(int i=1; i<=y; i++){
		Return_amt = Return_amt * (1.0 + r);
	}
}

Fixed_Deposit::Fixed_Deposit(long int p, int y, int r){
	P_amount = p;
	Years = y;
	Rate = r;
	
	Return_amt = P_amount;
	for(int i =1; i<=y; i++){
		Return_amt = Return_amt * (1.0 + float(r)/100);
	}	
}

void Fixed_Deposit :: Display(void){
			cout<<"\n Principal Amount \t=" <<P_amount;
			cout<<"\n Retun Amount \t\t=" <<Return_amt;
		}


int main(){
	long int p;
	int y;
	float r;
	int R;
	
	cout<<"\n Enter the Principal Amount, No. of Years & Rate of Interest\n";
	cin>>p >>y >>r;
	Fixed_Deposit FD1(p, y, r);
	
	cout<<"\n\n Enter the Principal Amount, No. of Years & Rate of Interest\n";
	cin>>p >>y >>R;
	Fixed_Deposit FD2(p, y, R);
	
	cout<<"\n Fixed Deposit-1:\n";
	FD1.Display();
	
	cout<<"\n\n Fixed Deposit-2:\n";
	FD2.Display();
	
	return 0;
}
