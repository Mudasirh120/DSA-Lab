// Linear search
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of the Array : ";
    cin>>size;
    int *Arr= new int(size);
    for (int i = 0; i < size; i++){
        cout<<"Enter "<<i+1<<" Element : ";
        cin>>Arr[i];
    }
    int target=0;
    int index;
    int flag=1;
    while(flag==1){
    cout<<"Enter Target number to find in the Array : ";
    cin>>target;
    for (int i = 0; i < size; i++)
    {
        if(Arr[i]==target){
            index=i;
            break;
        }else{
            index=-1;
        }
    }
    if(index!=-1){
        cout<<"Target found! at index : "<<index<<endl;
    }else{
        cout<<"Target not found!"<<endl;
    }
    cout<<"To check again Press 1 : ";
    cin>>flag;
    }
    return 0;
}