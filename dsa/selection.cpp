#include<iostream>
using namespace std;

void selection(int &arr[],int n){

    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            
            if(arr[min]>arr[j]){

                min=j;

            }
            swap(arr[min],arr[i]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    int arr[5]={64,25,12,22,11};
    selection(arr,5);
    
    return 0;
}