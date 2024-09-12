#include<iostream>
using namespace std;
#define max    10
class stack{
    private:
    int top;   
    string arr[max];
    public:
    stack(){
     top=-1;   // initializing from -1 to maintain proper indexing.
    };
    int size(){
        return (top+1);
    }
    void push(string a){
        if(top<max){
        top++;
       arr[top]=a;
        }else{
            cout<<"Stack OverFlow"<<endl;
        }
    }
    string pop(){
        if(top>-1){
            cout<<arr[top]<<" popped."<<endl;
        top--;
        return arr[top+1]; // returning at the time of popping if needed , can be stored in some variable.
        }else{
            cout<<"isEmpty Stack , pop() error."<<endl;
            return 0;
        }
    }
    string peek(){
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
 stack mystack1;
 stack mystack2;
 mystack1.push("a");
 mystack1.push("b");
 mystack1.push("c");
 mystack1.display();
 mystack2.push(mystack1.pop());
 mystack2.push(mystack1.pop());
 mystack2.push(mystack1.pop());
 mystack2.display();
 
}