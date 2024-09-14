#include<iostream>
using namespace std;
class Calculator{
   private:
   int num1=0,num2=0,answer=0;
   char opCode;
   public:
   Calculator(){
    cout<<"<<<<<<<<<<<<<<Welcome to the Calculator>>>>>>>>>>>>>>"<<endl;
    this->Menu();
   }
   void Menu(){
        cout<<"Choose an Operation : "<<endl;
        cout<<"'+' for Addition"<<endl;
        cout<<"'-' for Subtraction"<<endl;
        cout<<"'*' for Multiplication"<<endl;
        cout<<"'/' for Division"<<endl;
        cout<<"'^' for Power"<<endl;
        cout<<"'x' for EXIT"<<endl;
        getOpCode();
    }
   char getOpCode(){
        cout<<"Choose an OpCode : ";
        cin>>this->opCode;
        while(this->opCode!= '+' && this->opCode!='/' && this->opCode!='-' && this->opCode!='*' && this->opCode!='^' && this->opCode!='x'){
        cout<<"Choose only between (+,-,*,/,^,x) : ";
        cin>>this->opCode;
        }
        getOperation();
    }
    int getOperation(){
        switch(this->opCode){
            case '+':
            getNumbers();
            this->answer=Addition(this->num1,this->num2);
            showResult();
            break;
            case '-':
            getNumbers();
            this->answer=Subtraction(this->num1,this->num2);
            showResult();
            break;
            case '*':
            getNumbers();
            this->answer=Multiplication(this->num1,this->num2);
            showResult();
            break;
            case '/':
            getNumbers();
            this->answer=Division(this->num1,this->num2);
            showResult();
            break;
            case '^':
            getNumbers();
            Pow(this->num1,this->num2);
            showResult();
            break;
            case 'x':
            return 0;
        }
     }    
    void getNumbers(){
        
        cout<<"Choose first Number : ";
        cin>>this->num1;
        cout<<"Second Number will "<<this->opCode<<endl;
        cout<<"Choose Second Number : ";
        cin>>this->num2;
    }
    int Addition (int a, int b){
        return a+b;
    }
    int Subtraction (int a, int b){
        return a-b;
    } 
    int Division (int a, int b){
        return a/b;
    } 
    int Multiplication (int a, int b){
        return a*b;
    } 
    int Pow (int number, int pow){
        answer=1;
        for(int i=0;i<pow;i++){
            this->answer*=number;
        }
    }
    void showResult(){
        cout<<"Result of "<<this->opCode<<" operation is : "<<this->answer<<endl;
        Menu();
    } 
};
int main(){
   Calculator myCalc;
}