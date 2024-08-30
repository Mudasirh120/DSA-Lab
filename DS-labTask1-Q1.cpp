#include<iostream>
using namespace std;
int main(){
    int size=10;
    int Arr[size];
    for (int i = 0; i < size; i++){
        cout<<"Enter "<<i+1<<" student's age : ";
        cin>>Arr[i];
    }
int max=0;
    for (int i = 0; i < size; i++)
    {
        if(Arr[i]>max){
           max=Arr[i];
        }
    }
    cout<<"Highest age is : "<<max<<endl;
}