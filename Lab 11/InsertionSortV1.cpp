#include<iostream>
using namespace std;
int main(){
	int n=5;
	int a[n];
	for (int i=0;i<n;i++)
	{cout<<"Enter value "<<i+1<<endl;
	cin>>a[i];
	}
	cout<<"UnSorted Array:"<<endl;
	for(int k=0;k<n;k++)
	cout<<a[k]<< "\t";
	cout<<" "<<endl;
	cout<<"Insertion Sort"<<endl;
	for(int i=1;i<n;i++){
		int temp=a[i];
		int j=i-1;
		while(j>=0 && a[j]<temp){
			a[j+1]=a[j];
			j--;		
		}
		a[j+1]=temp;	
	}
	cout<<"Sorted Array after Insertion Sort is :"<<endl;
	for(int k=0;k<n;k++)
	cout<<a[k]<< "\t";
}
