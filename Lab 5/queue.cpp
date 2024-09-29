#include<iostream>
using namespace std;
#define max    10
class queue{
    private:
    int front,rear;   
    int arr[max];
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
    void enqueue(int a){
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
    int dequeue(){
        if(rear>-1){
            cout<<arr[front]<<" Dequeued."<<endl;
            front++;
            return arr[front-1]; // returning at the time of dequeuing if needed , can be stored in some variable.
        }else{
            cout<<"isEmpty queue , dequeue() error."<<endl;
            return 0;
        }
    }
     int peek(){
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
        delete [] arr;
    }


};
int main(){
queue myqueue;
 cout<<"isEmpty : "<<myqueue.isEmpty()<<endl;
 myqueue.enqueue(3);
 myqueue.enqueue(4);
 myqueue.enqueue(5);
 myqueue.display();
 cout<<myqueue.size()<<endl;
 myqueue.dequeue();
 cout<<"isEmpty : "<<myqueue.isEmpty()<<endl;
 myqueue.clear();
 cout<<"isEmpty : "<<myqueue.isEmpty()<<endl;
 int dequeuedElement;
 myqueue.enqueue(1);
 dequeuedElement=myqueue.dequeue();
 cout<<dequeuedElement<<endl; 
}