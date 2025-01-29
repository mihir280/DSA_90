#include<iostream>
using namespace std;

int main(){
    
    int arr[6]={1,2,3,4,5,6};

    int i=0,j=1;
    while(j<6){

        swap(arr[i],arr[j]);
        i=i+2;
        j=j+2;

    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
     }
    return 0;
}