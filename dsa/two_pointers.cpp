#include<iostream>
using namespace std;

void pointers(int arr[],int n){
    int i =0,j=1;

    while(j<n){

        if(arr[i]==0){
            if(arr[j]!=0){
                swap(arr[i],arr[j]);
                i++,j++;
            }else if(arr[j]==0){
                j++;
            }
        }else if(arr[i]!=0){
            i++;
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}

int main(){

    int arr[7]={2,0,1,3,0,0,0};
    pointers(arr,7);
    
    return 0;
}