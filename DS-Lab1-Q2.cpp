// Dynamic Array 
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of the Array : ";
    cin>>size;
    int *Arr= new int(size);
    for (int i = 0; i < size; i++){
        cout<<"Enter "<<i+1<<" Element :";
        cin>>Arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}