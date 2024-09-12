#include<iostream>
using namespace std;
#define max    10
class stack{
    private:
    int top;   
    int arr[max];
    public:
    stack(){
     top=-1;   // initializing from -1 to maintain proper indexing.
    };
    int size(){
        return (top+1);
    }
    void push(int a){
        if(top<max){
        top++;
       arr[top]=a;
        }else{
            cout<<"Stack OverFlow"<<endl;
        }
    }
    int pop(){
        if(top>-1){
            cout<<arr[top]<<" popped."<<endl;
        top--;
        return arr[top+1]; // returning at the time of popping if needed , can be stored in some variable.
        }else{
            cout<<"isEmpty Stack , pop() error."<<endl;
            return 0;
        }
    }
    int peek(){
        if(top>-1){
     return arr[top];
     }
     else{
        cout<< "Empty Stack"<<endl;
        return 0;
     }
    }
    void clear(){
      if(top>-1){
       top=-1;
      }
      else{
        cout<<"Already isEmpty."<<endl;
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
        if(!isEmpty()){
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
 cout<<mystack.peek()<<endl;
 mystack.pop();
 cout<<mystack.peek()<<endl;
 cout<<"isEmpty : "<<mystack.isEmpty()<<endl;
 mystack.clear();
 cout<<"isEmpty : "<<mystack.isEmpty()<<endl;
 mystack.peek();
 int poppedElement;
 mystack.push(1);
 poppedElement=mystack.pop();
 cout<<poppedElement<<endl;
}