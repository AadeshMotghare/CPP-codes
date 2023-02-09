//Operator Overloading
//WAP to concatenate two strings using overloading a "Binary Operator" '+'

#include<iostream>
#include<string.h>
using namespace std;

class Name{
	char name[20];
	public:
		void getdata(void);
		void display(void);
		Name operator +(Name);  //Declaration of Operator overloading
};

void Name :: getdata(void){
	//cout<<"\n Enter Your Name\t";
	cin>>name;
}

void Name :: display(void){
	cout<<"\n Your Full Name is\t" <<name <<endl;
}

Name Name :: operator +(Name m){  //Definition of Operator Overloading
	Name temp;
	strcpy(temp.name, name);
	strcat(temp.name, " " );
	strcat(temp.name, m.name);
	return temp;
}

int main(){
	Name S1, S2, S3;
	cout<<"\n Enter Your First Name\t";
	S1.getdata();
	
	cout<<"\n Enter Your Last Name\t";
	S2.getdata();
	
	S3 = S1 + S2;   //call to operator overloading
	
	S3.display();
	
	return 0;
	
}



