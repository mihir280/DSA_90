#include<iostream>
using namespace std;

void Bubble(int arr[],int n){

    bool swape=false;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swape=true;
            }

        }
        if(swape==false){
            break;
        }

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    Bubble(arr,5);
    
    return 0;
}