//Function Overloading
//WAP to overload a function called as "Area()" depending upon the 2D shapes.
#include<iostream>
using namespace std;

class Shape{
	float radius;
	int len, bre;
	double base, height;
	public:
		void area(float);
		void area(int, int);
		void area(double, double);
};

void Shape :: area(float temp){
	float result1;
	radius = temp;
	result1 = 3.14 * radius *radius;
	cout<<"\n Area of the Circle \t=" <<result1 <<endl;
}

void Shape :: area(int l, int b){
	int result2;
	len = l;
	bre = b;
	result2 = len * bre;
	cout<<"\n Area of the Rectangle \t=" <<result2 <<endl;
}

void Shape :: area(double b, double h){
	double result3;
	base = b;
	height = h;
	result3 = 0.5 * base * height;
	cout<<"\n Area of Triangle \t=" <<result3 <<endl;
}

int main(){
	Shape S1, S2, S3;
	S1.area(5.3);
	S2.area(2, 3);
	S3.area(2.5, 3.5);
	return 0;
}
