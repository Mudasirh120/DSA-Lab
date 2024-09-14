#include<iostream>
using namespace std;
int main(){
    int a=0,b=0;
    cout<<"Enter value of num1 : ";
    cin>>a;
    cout<<"Enter value of num2 : ";
    cin>>b;
    int *aPtr=&a;
    int *bPtr=&b;
    cout<<"A is "<<*aPtr<<endl;
    cout<<"B is "<<*bPtr<<endl;
}