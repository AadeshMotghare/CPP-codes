//WAP to print details of Student: Name, Roll number, Year, Branch, Section:
#include<iostream>
using namespace std;

int main(){
	char name[25], branch[25];
	int roll_no, year;
	char section;
	
	cout<<"\n Provide following details of student\n";
	cout<<"\n Enter the Name of Student\n";
	cin>>name;
	cout<<"\n Enter Roll Number of the student\n";
	cin>>roll_no;
	cout<<"\n Enter the Year\n";
	cin>>year;
	cout<<"\n Enter the Branch\n";
	cin>>branch;
	cout<<"\n Enter the Section\n";
	cin>>section;
	
	cout<<"\n The Details of Student are as follows:\n";
	cout<<"\n Name of Student \t:" <<name;
	cout<<"\n Roll Number \t\t:"<<roll_no;
	cout<<"\n Year \t\t\t:"<<year;
	cout<<"\n Branch \t\t:"<<branch;
	cout<<"\n Section \t\t:"<<section;
	
	return 0;
} 
