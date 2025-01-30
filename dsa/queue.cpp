#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(){
        arr = new int[size];
        front=-1;
        rear=-1;


    }

    void push(int val){
        if(rear==size-1){
            cout<<" overflow"<<endl;
        }
        rear++;
        arr[rear]=val;
        if(front==-1)front++;
    }

    void pop(){
        if(front==-1){
            cout<<"underflow";
            return;
        }front++;
    }
};

void reverseQueue(){
    queue<int> q;
    stack<int> st;
    int ans=0;

    while(q.front()<=q.back()){
        ans=q.pop();
        q.front()++;
        st.push(ans);
        
    }
    while(st.empty()){
        cout<<st.top();
        st.pop();
    }


}


int main(){

     queue<int> q;
     q.push(1);
     q.push(2);
     q.push(3);
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}