#include<iostream>
using namespace std;
int main(){
    int num1=4;
    int num2=3;
    cout<<"Num1 : "<<num1<<endl;
    cout<<"Num2 : "<<num2<<endl;
    int *ptr1=&num1;
    int *ptr2=&num2;
    *ptr1=num2+4;
    *ptr2=num1-num2;
    *ptr1=num1-num2;
    cout<<"Num1 : "<<num1<<endl;
    cout<<"Num2 : "<<num2<<endl;
}