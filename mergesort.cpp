y
#include<iostream>
using namespace std;

void mergesort(int*, int, int);
void mergesort2(int*, int, int, int, int);

int main(){
	int size,i;
	cout<<"\n Enter the size of the Array\n";
	cin>>size;
	int a[size];
	cout<<"\n Enter the Array Elements\n";
	for(i=0;i<size;i++)
		cin>>a[i];
	mergesort(a,0,size-1);
	cout<<"\n Sorted Array Elements are as follows:\n";
	for(i=0;i<size;i++)
		cout<< a[i] <<endl;
	return 0;
}

void mergesort(int a[], int m, int n){
	int h,i;
	if(m<n){
		h=(m+n)/2;
		mergesort(a,m,h);
		mergesort(a,h+1,n);
		mergesort2(a,m,h,h+1,n);
	}
		
}

void mergesort2(int a[], int m, int h, int p, int n){
	int i,j,k,c[50];
	i=m;
	j=p;
	k=0;
	while((i<=h) && (j<=n)){
		if(a[i]<a[j]){
			c[k]=a[i];
			k++;
			i++;	
		}
		else{
			c[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=h){
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<=n){
		c[k]=a[j];
		k++;
		j++;
	}
	for(i=m,j=0;i<=n;i++,j++)
		a[i]=c[j];
}
