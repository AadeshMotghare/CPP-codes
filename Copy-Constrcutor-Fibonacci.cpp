//WAP to print the "Fibonacci Series" using a Copy Constructor:
//0 1 1 2 3 5 8 13 21 34.....
//a b c
//	a b c
//	  a b c 
#include<iostream>
using namespace std;

class Fibonacci{
	unsigned long int term1, term2, next_term;
	public:
		Fibonacci(){
			term1 = 0;
			term2 = 1;
			next_term = term1 + term2;
		}
		
		Fibonacci(Fibonacci &f){
			term1 = f.term1;
			term2 = f.term2;
			next_term = term1 + term2;
		}
		
		void increment(){
			term1 = term2;
			term2 = next_term;
			next_term = term1 + term2;
		}
		void display(){
			cout<<next_term <<"\t" <<endl;
		}
};

int main(){
	Fibonacci a1;
	Fibonacci a2(a1);
	cout<<"\n First 25 terms of Fibonacci Series ar as follows:\n";
	for(int i=0; i<25; i++){
		a2.display();
		a2.increment();	
	}
	
	return 0;
}

