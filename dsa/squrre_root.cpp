#include<iostream>
using namespace std;

int square(int k){
    int s=1;
    int e=k;
    int mid=0;
    while(s<=e){
        mid=s+(e-s)/2;
        if(mid*mid==k){
            return mid;
        }else if(mid*mid<k){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return -1;
}

int main(){
    int n=6;
    cout<<square(n);
    
    return 0;
}