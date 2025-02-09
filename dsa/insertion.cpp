#include<iostream>
using namespace std;

void insertion(int arr[],int n){

    for(int i=1;i<n;i++){
        int temp=arr[i];

        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;
            }
            j--;
        }

        // cout<<arr[j+1]<<" ";

        arr[j+1]=temp;
        // cout<<arr[j]<<" ";


    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[4]={4,12,11,20};
    insertion(arr,4);
    
    return 0;
}