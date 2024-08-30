#include<iostream>
using namespace std;
void GetArrValue(int *Arr,int size){
     for (int i = 0; i < size; i++){
        cout<<"Enter "<<i+1<<" Element : ";
        cin>>Arr[i];
    }
    }
void PrintArr(int Arr[],int size){
     for (int i = 0; i < size; i++)
    {
        cout<<Arr[i]<<" ";
    }
    void AddArr(int *Arr,int size){
     for (int i = 0; i < size; i++)
      
    }
}    
int main(){
    int size1=0;
    cout<<"Enter size of array : ";
    cin>>size1;
    int *Arr1=new int(size1);
    GetArrValue(Arr1,size1);
    PrintArr(Arr1,size1);
    int size2=size1;
    int *Arr2=new int(size2);
    GetArrValue(Arr2,size2);
    PrintArr(Arr2,size2);
    int size3=size1;
    int *Arr3=new int(size3);
    GetArrValue(Arr3,size3);
    PrintArr(Arr3,size3);
    int size4=size1;
    int *Arr4=new int(size4);
    AddArr(Arr4,size4);
}