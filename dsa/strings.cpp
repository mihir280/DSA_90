#include<iostream>
using namespace std;

string lower(string s){
    int i=0;
    while(i<s.size()){
        s[i]=tolower(s[i]);
        i++;

    }

    return s;

}

int main(){
    string s="N2 i&nJA?a& jnI2n";
    
    cout<<lower(s);
    
    return 0;
}