#include<iostream>
using namespace std;


int main(){
    
    int arr[8]={1,0,2,0,3,0,4,1};
    int i=0,j=1;
    while(j<8){
        if(arr[i]==0){
            if(arr[j]==0){
                j++;
            }else{
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }else{
            j++,i++;
        }
    }

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
  
    
    return 0;
}