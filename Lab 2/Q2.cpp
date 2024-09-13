#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size for arrays : ";
    cin>>size;
    int *Arr1 = new int[size];
    int *Arr2 = new int[size];
    int *Arr3 = new int[size];
    int *sumArray = new int[size];
    cout<<"First Array :"<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<" elements of array : ";
        cin>>Arr1[i];
    }
    cout<<"Second Array :"<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<" elements of array : ";
        cin>>Arr2[i];
    }
    cout<<"Third Array :"<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<" elements of array : ";
        cin>>Arr3[i];
    }
    cout<<"Sum Array is :"<<endl;
    for (int i = 0; i < size; i++)
    {
        sumArray[i]=Arr1[i]+Arr2[i]+Arr3[i];
        cout<<i+1<<" element's sum is : "<<sumArray[i]<<endl;
    }
    
}    