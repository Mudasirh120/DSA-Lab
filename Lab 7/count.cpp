#include <iostream>
using namespace std;
int main(){
int lower=0,upper,size,targ,index=-1,temp=0,mid,count=0;
cout<<"enter size"<<endl;
cin>>size;
int arr[size];
upper=size-1;
for(int i=0;i<size;i++){
	cout<<"enter value no "<<i+1<<endl;
	cin>>arr[i];
}
 for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"current array "<<endl;
    for(int i=0;i<size;i++){
    	cout<<arr[i];
	}
cout<<"\nEnter target to find\n";
cin>>targ;
lab:
while(lower<=upper){
	mid=(lower+upper)/2;
	if(arr[mid]==targ){
			count++;
		index=mid;
		cout<<"\ncurrent array = ";
	for(int i=lower;i<=upper;i++){
		cout<<arr[i];}
		break;
	}
	else if(arr[mid]>targ){
		upper=mid-1;
	}
	else{
		lower=mid+1;
	}
	cout<<"\ncurrent array = ";
	for(int i=lower;i<=upper;i++){
		cout<<arr[i];
	}
}
for(int i=lower;i<upper;i++){
	if(targ==arr[i]){
		lower++;
	
		goto lab;
	}
	else{
		continue;
	}
}
if(index<0){
	cout<<"\ntarget not found"<<endl;
}
else{
	cout<<"\ntarget found "<<count<<" times"<<endl;
}


}

