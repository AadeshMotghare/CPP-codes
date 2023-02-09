#include<iostream>
using namespace std;
class employee{
	public:
	int code;
	float deduct=6/100;
	float basic,allow,nets;
	
		void fun();
		void getdata();
		void display();
};
void employee::getdata(){
	cout<<"enter the code and basic of the employee\n";
	cin>>code>>basic;
}
void employee::fun(){
	allow=basic*18/100;
	nets=basic+allow-deduct;
}
void employee::display(){
	cout<<"the data of the employee is\n";
	cout<<code<<endl;
	cout<<basic<<endl;
	cout<<allow<<endl;
	cout<<deduct<<endl;
	cout<<nets<<endl;
}
int main()
{
	employee e[2];
	for(int i=0;i<2;i++)
	{
	e[i].getdata();
	}
	for(int k;k<2;k++)
	{
 	e[k].display();
}
return 0;
}
