//Bubble Sorting Algorithm:
//Loop for Comparison 
//Loop for iterative comparison for all data elements
#include<iostream>
using namespace std;

int main(){
	int i, j, temp, size;
	
	cout<<"\n Enter the size of Array\n";
	cin>>size;
	
	int arr[size];
	
	cout<<"\n Enter the Data of Array\n";
	for(i=0; i<size;i++){
		cin>>arr[i];
	}
	cout<<"\n Data elements of Array Before Sorting are as follows:\n";
	for(i=0; i<size; i++){
		cout<<arr[i] <<endl;
	}
	
	for(i=0;i<size;i++)
		for(j=i+1; j<size; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];  //Swapping of data
				arr[i] = arr[j];
				arr[j] = temp;
			} 
		}
	cout<<"\n Data elements of Array After Sorting are as follows:\n";
	for(i=0; i<size; i++){
		cout<<arr[i] <<endl;
	}
	
	return 0;
}	
	


