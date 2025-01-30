#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        arr= new int[size];
        top=-1;

    }
    bool isfull(){
        return top==size-1;
    }
    void push(int value){
        if(isfull()){
            cout<<"Stack is full";
            return;
        }
        top++;
        arr[top]=value;
    }

    bool isEmpty(){
        return top==-1;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Underflow";
            return;
        }
        top--;
    }
    int peek(){
        return arr[top];
    }

    


};

int main(){
    
    // Stack.push(1);
    Stack s(5);

    for(int i=0;i<6;i++){
        s.push(i);
    }

    for(int i=0;i<5;i++){
        cout<<s.peek()<<" ";
        s.pop();
    }

    return 0;
}