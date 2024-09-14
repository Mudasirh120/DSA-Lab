#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size for array : ";
    cin>>size;
    int *Arr = new int[size];
    int index,target=0;
    int check=1;
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<" elements of array : ";
        cin>>Arr[i];
    }
    while(check==1){
    index=-1;
    cout<<"Enter target to find in array : ";
    cin>>target;
    for (int i = 0; i < size; i++)
    {
        if(Arr[i]==target){
            index=i;

            break;
        }
    }
    if(index!=-1){
        cout<<"Target found at index : "<<index<<endl;
    }else{
        cout<<"Target not found : "<<index<<endl;        
    }
    cout<<"To check another target , Press 1 , to quit press 0 : ";
    cin>>check;
    }
    delete[] Arr;
    return 0;
}