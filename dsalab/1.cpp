#include<iostream>
using namespace std;
#define max    100
class stack{
    private:
    int top;
    int arr[max];
    public:
    stack(){
     top=-1;
    };
    int size(){
        return (top+1);
    }
    void push(int a){
        if(top<=max){
        top++;
       arr[top]=a;
        }else{
            cout<<"Stack OverFlow"<<endl;
        }
    }
    int top(){
        if(top>-1){
            return arr[top];
        }else{
            cout<<"Empty Stack."<<endl;
        }
    }
    int pop(){
        if(top>-1){
            cout<<arr[top]<<" poppped."<<endl;
        top--;
        return arr[top-1];
        }else{
            cout<<"Empty Stack , pop() error."<<endl;
        }
    }
    int peek(){
        if(top>-1){
     cout<<arr[top]<<endl;
     }
     else{
        cout<< "Empty Stack"<<endl;
     }
     return 0;
    }
    void clear(){
      if(top>-1){
       top=-1;
      }
      else{
        cout<<"Already empty."<<endl;
      }
     }
    bool isEmpty(){
        if(top>-1){
       return false;
     }
     else{
        return true;
     }
    }
    void display(){
        if(top>-1){
        for(int i=0;i<=top;i++){
          cout<<i+1<<" element : "<<arr[i]<<endl;
        }
        }
    }
    ~stack(){
        free(arr);
    }


};
int main(){
 stack mystack;
 cout<<"isEmpty : "<<mystack.isEmpty()<<endl;
 mystack.peek();
 cout<<mystack.size()<<endl;
 mystack.push(1);
 mystack.push(2);
 mystack.display();
 mystack.peek();
 mystack.pop();
 mystack.peek();
 cout<<"isEmpty : "<<mystack.isEmpty()<<endl;
 mystack.clear();
 cout<<"isEmpty : "<<mystack.isEmpty()<<endl;
 mystack.peek();
}