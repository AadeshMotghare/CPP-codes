//Program for Constructor - Parameterless Constrcuctor
#include<iostream>
using namespace std;

class Counter{
	unsigned int count;
	
	public:
		Counter(){    // Parameterless Constructor
			count=1;
		}
	void inc_count(){  // Member function to increment the count value
		count++;
	}
	int get_count(){  //Member function to provide the value of count
		return count;
	}
};

int main(){
	
	Counter C1, C2;
	cout<<"Value of C1 Object"<<endl <<C1.get_count()<<endl;
	cout<<C2.get_count()<<endl;
	
	C1.inc_count();
	C2.inc_count();
	C2.inc_count();
	C2.inc_count();
	
	cout<<C1.get_count()<<endl;
	cout<<C2.get_count();
	
	return 0;
}
