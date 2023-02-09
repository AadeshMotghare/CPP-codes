#include<iostream>
using namespace std;

class Car{
char name[20];
char company[20];
float price;
int cc, mileage;
public:
void getdata(void);
void display(void);
};
void Car::getdata(void){
cout<<"\n Enter the Name of the Car:\n";
cin>>name;
cout<<"\n Enter the Name of the Company:\n";
cin>>company;
cout<<"\n Enter the Price of the Car:\n";
cin>>price;
cout<<"\n Enter the Size of the Engine in CC:\n";
cin>>cc;
cout<<"\n Enter the Mileage of the Car:\n";
cin>>mileage;
}
void Car::display(void){
cout<<"\n Name of Car\t\t: " <<name <<endl;
cout<<"\n Name of Company\t: " <<company <<endl;
cout<<"\n Price\t\t\t : " <<price <<endl;
cout<<"\n Size of Engine(CC)\t: " <<cc <<endl;
cout<<"\n Mileage\t\t: " <<mileage <<endl;
}
int main(){
	int a,i,j;
	cout << " Enter the number of Cars of which you want details : ";
    cin >> a;
    cout << "\n\n";
    Car car;
    for(i=0;i<a;i++){
     car.getdata();
    }
	for(j=0;j<a;j++){
     car.display();
    }
return 0;
}
