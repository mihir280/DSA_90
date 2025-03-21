#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[n];
    int total=0;

    for(int i=0;i<n;i++){
        total+=arr[i];
    }

    int left =0;
    int right=0;
    for(int i=0;i<n;i++){
        right=total-left-arr[i];
        if(right==left){
            cout<<i<<" ";
        }
        left+=arr[i];
    }
    cout<<-1;
    
    return 0;
}