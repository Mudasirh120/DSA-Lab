#include<iostream>
using namespace std;
int main(){
    int size,sum=0;
    cout<<"Enter size of array : ";
    cin>>size;
    int *Arr=new int[size];
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<" element : ";
        cin>>Arr[i];
    }
    for(int i=0;i<size;i++){
       if(Arr[i]%2!=0){
        sum=sum+Arr[i];
       }
    }
    cout<<"Sum of odd integer is : "<<sum<<endl;
}