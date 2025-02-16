#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }

    if(b==0){
        return a;
    }
    if(a>b){
    gcd(a-b,b);
    }else{
        gcd(b-a,a);
    }

    
}
int main(){

    cout<<gcd(24,72);    
    return 0;
}