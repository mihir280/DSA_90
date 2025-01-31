#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void revrseing(queue<int> q){

    stack<int> st;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        st.push(temp);

    }

    while(!st.empty()){
        int temp=st.top();
        st.pop();
        q.push(temp);
    }

}



int main(){
    
    return 0;
}