#include<iostream>
using namespace std;

class Bike{
char name[20];
char company[20];
float price;
int cc, mileage;
public:
void getdata(void);
void display(void);

};

void Bike::getdata(void){
cout<<"\n Enter the Name of the Bike\n";
cin>>name;
cout<<"\n Enter the Name of the Company\n";
cin>>company;
cout<<"\n Enter the Price of the Bike\n";
cin>>price;
cout<<"\n Enter the Size of the Engine\n";
cin>>cc;
cout<<"\n Enter the Mileage of the Bike\n";
cin>>mileage;
}
void Bike::display(void){
cout<<"\n Name of Bike\t\t: " <<name <<endl;
cout<<"\n Name of Company\t: " <<company <<endl;
cout<<"\n Price\t\t\t : " <<price <<endl;
cout<<"\n Size of Engine\t\t: " <<cc <<endl;
cout<<"\n Mileage\t\t: " <<mileage <<endl;
}

int main(){
Bike B1, B2, B3, B4, B5;

B1.getdata();
B2.getdata();
B3.getdata();
B4.getdata();
B5.getdata();

B1.display();
B2.display();
B3.display();
B4.display();
B5.display();

return 0;
}
