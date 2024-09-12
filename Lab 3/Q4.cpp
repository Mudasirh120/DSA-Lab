#include<iostream>
using namespace std;
string getMonth(int i){
  switch(i){
    case 1:
    return "January";
    case 2:
    return "February";
    case 3:
    return "March";
    case 4:
    return "April";
    case 5:
    return "May";
    case 6:
    return "June";
    case 7:
    return "July";
    case 8:
    return "August";
    case 9:
    return "September";
    case 10:
    return "October";
    case 11:
    return "November";
    case 12:
    return "December";
  }
}
int main(){
    int size=12,maxI,minI;
    double max,min,sum=0,avg=0;
    double Arr[size];
    for (int i = 0; i <size; i++){
        cout<<"Enter Rainfall of "<<getMonth(i+1)<<" Month : ";
        cin>>Arr[i];
    }
    max=Arr[0];
    min=Arr[0];
    maxI=1;
    minI=1;
    for (int i = 1; i <size; i++){
        sum+=Arr[i];
        if(max<Arr[i]){
            max=Arr[i];
            maxI=i+1;
        }
        if(min>Arr[i]){
           min=Arr[i];
           minI=i+1;
        }
    }
    avg=sum/size;
    cout<<"Total Rainfall of Year is : "<<sum<<endl;
    cout<<"Average Rainfall of Year is : "<<avg<<endl;
cout<<"Maximum Rainfall was in "<<getMonth(maxI)<<" "<<max<<endl;
cout<<"Minimum Rainfall was in  "<<getMonth(minI)<<" "<<min<<endl;
}