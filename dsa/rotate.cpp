#include<iostream>
using namespace std;

void tempo(int nums[],int n){

    int temp=nums[n-1];

    for(int i=n-2;i>=0;i--){
        nums[i+1]=nums[i];
    }
    nums[0]=temp;
}
void rotate(int nums[],int n, int k) {

    int i=0;
    while(i<k){
        tempo(nums,n);
        i++;
    }

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    rotate(arr,7,3);



    
    return 0;
}