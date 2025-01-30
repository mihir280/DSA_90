#include<iostream>
#include<stack>

using namespace std;

void reverstring(string s){
    stack<string> st;

    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;

        }
        st.push(word);
        

    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

bool balanced(string s){
    stack<char> st;
    bool ans=true;

    for(int i=0;i<s.length();i++){
        
        if(s[i]== '(' || s[i]=='{' ||s[i]=='['){
            st.push(s[i]);
        }else if(s[i]==')'){
            if(st.top()=='(' && !st.empty()){
                st.pop();
            }else{
                ans=false;
                break;

            }
        }else if(s[i]=='}'){
            if(st.top()=='{' && !st.empty()){
                st.pop();
            }else{
                ans=false;
                break;
            }

        }
        else if(s[i]==']'){
            if(st.top()=='[' && !st.empty()){
                st.pop();
            }else{
                ans=false;
                break;
            }
        }

    }

    return ans;


    }


    


int main(){
    
    string s="[{(}]";
    cout<<balanced(s);
    return 0;
}