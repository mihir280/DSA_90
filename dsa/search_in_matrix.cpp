#include<iostream>
using namespace std;

bool search(int mat[][4],int n,int target){
    int row=3;
    int col=4;

    int start=0;
    int end=row*col-1;
    int mid;

    while(start<=end){
        mid=start+(end-start)/2;

        int element=mat[mid/col][mid%col];

        if(element==target){
            return 1;
        }
        if(element<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return 0;
}

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11};

    cout<<search(arr,3,5);
    
    return 0;
}