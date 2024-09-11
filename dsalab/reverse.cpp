#include<iostream>
using namespace std;
#define max    100
class stack{
    private:
    int top;
    char arr[max];
    public:
    stack(){
     top=-1;
    };
    int size(){
        return (top+1);
    }
    void push(char a){
        if(top<=max){
        top++;
       arr[top]=a;
        }else{
            cout<<"Stack OverFlow"<<endl;
        }
    }
    char top(){
        if(top>-1){
            return arr[top];
        }else{
            cout<<"Empty Stack."<<endl;
        }
    }
    char pop(){
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
 stack stack1;
 stack1.push('a');
 stack1.push('b');
 stack1.push('c');
 stack1.display();
 stack stack2;
 stack2.push(stack1.pop());
 stack2.push(stack1.pop());
 stack2.push(stack1.pop());
 stack2.display();
}