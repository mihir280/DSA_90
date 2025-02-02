#include<iostream>
using namespace std;

int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=0;
    while(s<e){
        mid=s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }

    }
    return s;
}

int main(){
    int arr[5]={7,9,1,2,3};

    cout<<pivot(arr,5);

    return 0;
}