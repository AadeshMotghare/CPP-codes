Practical-1:
-----------
/*Construct a class "Student" which has data members as follows:
1. Name 
2. Branch
3. Roll Number
4. Age
5. Gender
6. Marks in 5 subjects

Create objects of class Student and print all the above mentioned details.
*/
#include<iostream>
using namespace std;

class Student{
	char name[25], branch[25], gender[10];
	int roll_no, age, sub1, sub2, sub3, sub4, sub5;
	
	public:
		void get_data(void);
		void display(void);
};

void Student :: get_data(void){
	cout<<"\n Enter the details of the student\n";
	cout<<"\n Name of Student\n";
	cin>>name;
	cout<<"\n Branch\n";
	cin>>branch;
	cout<<"\n Roll Number\n";
	cin>>roll_no;
	cout<<"\n Age\n";
	cin>>age;
	cout<<"\n Gender\n";
	cin>>gender;
	cout<<"\n Enter the marks in 5 subjects\n";
	cin>>sub1 >>sub2 >>sub3 >>sub4 >>sub5 ;
	cout<<"\n";
}

void Student :: display(void){
	cout<<"\n The details of the student are as follows\n";
	cout<<"\n Name of Student\t:"<<name;
	cout<<"\n Branch\t\t\t:"<<branch;
	cout<<"\n Roll Number\t\t:"<<roll_no;
	cout<<"\n Age\t\t\t:"<<age;
	cout<<"\n Gender\t\t\t:"<<gender;
	cout<<"\n The marks in 5 subjects are \n";
	cout<<"\n Subject1\t:" <<sub1;
	cout<<"\n Subject2\t:" <<sub2;
	cout<<"\n Subject3\t:" <<sub3;
	cout<<"\n Subject4\t:" <<sub4;
	cout<<"\n Subject5\t:" <<sub5;
}

int main(){
	Student S1;
	S1.get_data();
	S1.display();
	return 0;
}

