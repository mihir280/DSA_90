#include<iostream>
#include<stack>
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

    void reversing(string s){

    }


};

void reversing(string s){
    stack<string> st;

    for(int i=0;i<s.size();i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word=word+s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    
    // Stack.push(1);
    // Stack s(5);

    // for(int i=0;i<6;i++){
    //     s.push(i);
    // }

    // for(int i=0;i<5;i++){
    //     cout<<s.peek()<<" ";
    //     s.pop();
    // }

    string s="how are you";
    reversing(s);
    

    return 0;
}