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

int search(int arr[],int n,int k){
    int s;
    int e;
    int mid=0;
    int ans=-1;
    int pivo=(pivot(arr,n));
    // 1

    if(k>=arr[pivo] && k<=arr[n-1]){
        s=pivo;
        e=n-1;
         while(s<=e){
        mid=s+(e-s)/2;

        if(arr[mid]==k){
            ans=mid;
            return ans;
        }else if(arr[mid]<k){
            s=mid+1;
        }else{
            e=mid-1;

        }


    }

    }else{
        s=0;
        e=pivo-1;
         while(s<=e){
        mid=s+(e-s)/2;

        if(arr[mid]==k){
            ans=mid;
            return ans;
        }else if(arr[mid]<k){
            s=mid+1;
        }else{
            e=mid-1;

        }


    }
    }
   
    return ans;
}

int main(){

    int arr[9]={10,8,1,2,3,4,5,6,9};
    cout<<search(arr,9,9);
    
    return 0;
}