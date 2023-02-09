/*Practical:2 : Generate Fibonacci Series using 
a) a Constructor
b) a Copy Constructor
*/

#include<iostream>
using namespace std;

class Fibonacci{
	unsigned int term1, term2, next_term;
	
	public:
		Fibonacci(){
			term1 = 0;
			term2 = 1;
		}
		void series(int);
};

void Fibonacci :: series(int n){
	cout<<"\n The First" <<n <<" terms of the Fibonacci Series are as follows:\n";
	cout<<term1 <<endl;
	cout<<term2 <<endl;
	
	for(int i=1; i<=n-2;i++){
		next_term = term1 + term2;
		cout<<next_term <<endl;
		term1 = term2;   // 0 , 1 , 1, 2, 3, 5, 8, 13......
		term2 =next_term;
	}
}

int main(){
	Fibonacci F1;
	int terms;
	
	cout<<"\n Enter the Number of terms to be displayed\n";
	cin>>terms;
	
	F1.series(terms);
	return 0;
}

