#include<iostream>
using namespace std;
int main(){
    int num=0;
    cout<<"Enter value of num : ";
    cin>>num;
    int *numptr=&num;
    cout<<"Num is stored at "<<numptr<<" address.";
}