#include<iostream>
using namespace std;
int main(){
    int row,col,sum=0,avg,colI,rowI;
    cout<<"Enter rows of Array : ";
    cin>>row;
    cout<<"Enter columns of Array : ";
    cin>>col;
    int Arr[row][col];
    int rowTotal[row]={0},colTotal[col]={0},maxRow[row]={0},maxCol[col]={0};
    for (int i = 0; i <row; i++){
        for(int j=0;j<col;j++){
        cout<<"Enter "<<i+1<<" and "<<j+1<<" Element : ";
        cin>>Arr[i][j];
        }
    }
    maxRow[0]=Arr[0][0];
    maxCol[0]=Arr[0][0];
    for (int i = 0; i <row; i++){
        for(int j=0;j<col;j++){
            rowTotal[i]+=Arr[i][j];
            if(maxRow[i]<Arr[i][j]){
            maxRow[i]=Arr[i][j];
        }
            if(maxCol[j]<Arr[i][j]){
            maxCol[j]=Arr[i][j];
        }
            sum=sum+Arr[i][j];
            colTotal[j]+=Arr[i][j];
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Which row total to know : ";
    cin>>rowI;
    cout<<rowI<<" row total is : "<<rowTotal[rowI-1]<<endl;
    cout<<"Which row max to know : ";
    cin>>rowI;
    cout<<rowI<<" row max is : "<<maxRow[rowI-1]<<endl;
    cout<<"Which col total to know : ";
    cin>>colI;
    cout<<colI<<" col total is : "<<rowTotal[colI-1]<<endl;
    cout<<"Which col max to know : ";
    cin>>colI;
    cout<<colI<<" row max is : "<<maxRow[colI-1]<<endl;
    avg=sum/(row*col);
    cout<<"Sum of all the elements in 2d array is :"<<sum<<endl;
    cout<<"Average of all the elements in 2d array is :"<<avg<<endl;
}