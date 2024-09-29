#include<iostream>
#include<cstring>
using namespace std;
#define max    10
class queue{
    private:
    int front,rear;   
    char arr[max];
    public:
    queue(){
     front=-1;   // initializing from -1 to maintain proper indexing.
     rear=-1;
    }
    int size(){
        return (rear+1);
    }
    bool isEmpty(){
        if(rear>-1 && front>-1){
          return false;
     }
     else{
         return true;
    }
    }
    void enqueue(char a){
        if(isEmpty()){
            front=0;
        }
        if(rear<max){
          rear++;
          arr[rear]=a;
        }else{
            cout<<"Queue OverFlow"<<endl;
        }
    }
    char dequeue(){
        if(rear>-1){
            cout<<arr[front]<<" Dequeued."<<endl;
            front++;
            return arr[front-1]; // returning at the time of dequeuing if needed , can be stored in some variable.
        }else{
            cout<<"isEmpty queue , dequeue() error."<<endl;
            return 0;
        }
    }
     char peek(){
        if(!isEmpty()){
       return arr[front];
     }
     else{
        cout<< "Empty Stack"<<endl;
        return 0;
     }
     }
    void clear(){
      if(front>-1 && rear>-1){
       front=-1;
       rear=-1;
      }
      else{
        cout<<"Already isEmpty."<<endl;
      }
     }
    void display(){
        if(!isEmpty()){
        for(int i=0;i<=rear;i++){
          cout<<i+1<<" element : "<<arr[i]<<endl;
        }
        }
    }
    ~queue(){
        free(arr);
    }


};
int main(){
    string str = "Data Structure and Algo";
    char ConcatArr[str.length()];
    int lengthTracker=0;
    string str1,str2,str3,str4;
    queue q1,q2,q3,q4;
    str1 = str.substr(0, str.find(" "));
    str.erase(0, str.find(" ") + 1); 
    str2 = str.substr(0, str.find(" "));
    str.erase(0,str.find(" ") + 1);
    str3 = str.substr(0, str.find(" "));
    str.erase(0,str.find(" ") + 1);
    str4 = str.substr(0, str.find(" "));
    cout<<"First word : "<<endl; 
    for(int i=0;i<str1.length();i++){
        q1.enqueue(char(str1[i]));
    }
    q1.display();
    for(int i=0;i<str1.length();i++){
        ConcatArr[lengthTracker+i]=q1.dequeue();
    }
    lengthTracker+=str1.length();
    cout<<"Second word : "<<endl; 
    for(int i=0;i<str2.length();i++){
        q2.enqueue(char(str2[i]));
    }
    q2.display();
    for(int i=0;i<str2.length();i++){
        ConcatArr[lengthTracker+i]=q2.dequeue();
    }
    lengthTracker+=str2.length();
    cout<<"Third word : "<<endl; 
    for(int i=0;i<str3.length();i++){
        q3.enqueue(char(str3[i]));
    }
    q3.display();
    for(int i=0;i<str3.length();i++){
        ConcatArr[lengthTracker+i]=q3.dequeue();
    }
    lengthTracker+=str3.length();
    cout<<"Fourth word : "<<endl; 
    for(int i=0;i<str4.length();i++){
        q4.enqueue(char(str4[i]));
    }
    q4.display();
    for(int i=0;i<str4.length();i++){
        ConcatArr[lengthTracker+i]=q4.dequeue();
    }
    lengthTracker+=str4.length();
    for(int i=0;i<lengthTracker;i++){
        cout<<ConcatArr[i]<<" ";
    }
    return 0;
}
