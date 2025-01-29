#include<iostream>
using namespace std;
// using array

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(){
        arr=new int[100];
        top=-1;
    }

    void push(int val){
        if(top==size-1){
            cout<<"Stack overflow";
            return;
        }

        top++;
        arr[top]=val;

    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }
    void pop(){
        if(isEmpty()){
            cout<<" Stack is empty";
            return;
        }

        top--;

    }
    int peek(){
        if(isEmpty()){
            return -1;
        }
        return top;
    }
};

// using linked list

int main(){
    
    return 0;
}