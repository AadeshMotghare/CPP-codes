/*In a steel plant, the quality of steel is graded according to the following criteria
1. Hardness must be greater than 50
2. Carbon Content must be less than 0.7
3. Tensile Strength must be greater than 5600

The grades are as follows:
Grade is A if all the three conditions are met
Grade is B if conditions 1 & 2 are met
Grade is C if conditions 2 & 3 are met
Grade is D if conditions 1 & 3 are met
Grade is E if only one condition is met
Grade is F if none of the conitions are met.
*/

#include<iostream>
using namespace std;

int main(){
	int hardness, tensile;
	float carbon_content;
	char choice;
	
	do{
		cout<<"\n Enter the details of steel as follows:\n";
		cout<<"\n Enter the Hardness of Steel\n";
		cin>>hardness;
		cout<<"\n Enter the value of Carbon Content\n";
		cin>>carbon_content;
		cout<<"\n Enter the value of Tensile Strength\n";
		cin>>tensile;
		
		if(hardness>50 && carbon_content<0.7 && tensile>5600){
			cout<<"\n #########################################\n";
			cout<<"\n Grade of Steel\t: A\n";
			cout<<"\n #########################################\n";
		}
		else if(hardness>50 && carbon_content<0.7){
			cout<<"\n #########################################\n";
			cout<<"\n Grade of Steel\t: B\n";
			cout<<"\n #########################################\n";
		}
		else if(carbon_content<0.7 && tensile>5600){
			cout<<"\n #########################################\n";
			cout<<"\n Grade of Steel\t: C\n";
			cout<<"\n #########################################\n";
		}
		else if(hardness>50 && tensile>5600){
			cout<<"\n #########################################\n";
			cout<<"\n Grade of Steel\t: D\n";
			cout<<"\n #########################################\n";
		}
		else if(hardness>50 || carbon_content<0.7 || tensile>5600){
			cout<<"\n #########################################\n";
			cout<<"\n Grade of Steel\t: E\n";
			cout<<"\n #########################################\n";
		}
		else{
			cout<<"\n #########################################\n";
			cout<<"\n Grade of Steel\t: F\n";
			cout<<"\n #########################################\n";
		}
		cout<<"\n Do you want to continue Y/N\n";
		cin>>choice;
	}while(choice=='Y'||'y');
	cout<<"\n #########################################\n";
	cout<<"\n Have a Nice Day\n";
	cout<<"\n #########################################\n";
	return 0;
}


