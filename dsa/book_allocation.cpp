#include<iostream>
using namespace std;

int Book(int arr[],int n,int k){
    int start=1;
    int end=0;
    for(int i=0;i<n;i++){
        end+=arr[i];


    }
    int ans=-1;
    int mid=0;
    while(start<=end){
        mid=start+(end-start)/2;
        int total=0,  count=1;
        for(int i=0;i<n;i++){
            total=total+arr[i];
            if(total<=mid){
                continue;
            }else{
                count++;
            }

        }
        if(count<=k){
            ans=mid;
            end=mid-1;

        }else{
            start=mid+1;
        }

    }

    return ans;
}

int main(){
    int arr[4]={10,20,30,40};
    cout<<Book(arr,4,2);
    
    return 0;
}