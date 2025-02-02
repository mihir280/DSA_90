#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefixev(string s){
    stack<int> st;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            int temp=s[i]-'0';
            st.push(temp);
        }else{
            int operand1=st.top();
            st.pop();
            int operand2=st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(operand1+operand2);
                break;
            
            case '-':
                st.push(operand1-operand2);
                break;

            case '*':
                st.push(operand1*operand2);
                break;

            case '/':
                st.push(operand1/operand2);
                break;

            case '^':
                st.push(pow(operand1,operand2));
                break;
            
            }
        }
    }
    return st.top();
}

int posev(string s){
     stack<int> st;
    for(int i=0;i<st.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            int temp=s[i]-'0';
            st.push(temp);
        }else{
            int operand1=st.top();
            st.pop();
            int operand2=st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(operand1+operand2);
                break;
            
            case '-':
                st.push(operand1-operand2);
                break;

            case '*':
                st.push(operand1*operand2);
                break;

            case '/':
                st.push(operand1/operand2);
                break;

            case '^':
                st.push(pow(operand1,operand2));
                break;
            
            }
        }
    }
    return st.top();

}

int main(){
    
    return 0;
}