#include<iostream>
#include<stack>
#include<queue>

using namespace std;

queue<int> krevesl(queue<int> q,int k){

    stack<int> st;
    int i=0;
    while(i<k){
        int temp=q.front();
        q.pop();
        st.push(temp);
        i++;
    }

    while(!st.empty()){
        int temp=st.top();
        st.pop();
        q.push(temp);
    }

    for(int i=0;i<q.size()-k;i++){
        int temp=q.front();
        q.pop();
        q.push(temp);
        

    }
    return q;

}

int main(){
    
    return 0;
}