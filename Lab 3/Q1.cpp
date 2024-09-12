#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter sizes of Array : ";
    cin>>size;
    int Arr1[size][size];
    for (int i = 0; i <size; i++){
        for(int j=0;j<size;j++){
        cout<<"Enter "<<i+1<<" and "<<j+1<<" Element : ";
        cin>>Arr1[i][j];
        }
    }
    int sum=0;
    int prod=1;
    int avg=0;
    for (int i = 0; i <size; i++){
        for(int j=0;j<size;j++){
            sum=sum+Arr1[i][j];
            prod=prod*Arr1[i][j];
        }
    }
    avg=sum/(size*size);
    cout<<"Sum of all the elements in 2d array is :"<<sum<<endl;
    cout<<"Product of all the elements in 2d array is :"<<prod<<endl;
    cout<<"Average of all the elements in 2d array is :"<<avg<<endl;
}