#include<iostream>
using namespace std;
int main(){
    int no=10;
    int ages[no]={0};
    int max=0;
    for(int i=0;i<no;i++){
        cout<<"Enter age of "<<i+1<<" student :";
        cin>>ages[i];
    }
    max=ages[0];
    for (int i = 1; i < no; i++)
    {
      if(max<ages[i]){
        max=ages[i];
      }
    }
    cout<<"Largest age is : "<<max<<endl;
}