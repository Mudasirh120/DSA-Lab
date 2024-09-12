#include<iostream>
using namespace std;
int main(){
    int size=10,max,min;
    int Arr[size];
    for (int i = 0; i <size; i++){
        cout<<"Enter "<<i+1<<" Element : ";
        cin>>Arr[i];
    }
    max=Arr[0];
    min=Arr[0];
    for (int i = 1; i <size; i++){
        if(max<Arr[i]){
            max=Arr[i];
        }
        if(min>Arr[i]){
           min=Arr[i];
        }
    }
cout<<"Maximum value in Array is : "<<max<<endl;
cout<<"Minimum value in Array is : "<<min<<endl;
}