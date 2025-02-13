#include<iostream>
using namespace std;

void remove(string s){
    string rev="";
    int i =0;
    while(i<s.size()){
        string word="";
        if(i<s.size() && s[i]==' '){
            word="@40";
            i++;

        }

        while(i<s.size() && s[i]!=' '){
            word+=s[i];
            i++;
        }

        rev+=word;
    }

    cout<<rev<<" "<<endl;
}

int main(){
    
    return 0;
}