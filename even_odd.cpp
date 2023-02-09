//WAP to print whether the entered number is EVEN or ODD
#include<iostream>
using namespace std;

int main(){
	int num;
	
	cout<<"\n Enter Any Number\n";
	cin>>num;
	
	if(num%2 == 0)
		cout<<"\n Entered Number is an EVEN Number\n";
	else
		cout<<"\n Entered Number id an ODD Number";
	
	return 0;
}
