#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={{1,2,3,4},
                    {4,5,6,7},
                    {7,8,9,10},
                    {8,9,10,11}
                    
    };
    
    int tr=0,br=3;
    int tc=0,bc=3;

    while(tr<=br || tc<=bc){
        for(int i=tc;i<=bc;i++){
            cout<<arr[tr][i]<<" ";
        }
        tr++;
        

        for(int i=tr;i<=br;i++){
            cout<<arr[i][bc]<<" ";
        }
        bc--;
        

        for(int i=bc;i>=tc;i--){
            cout<<arr[br][i]<<" ";
        }
        br--;
        
        for(int i=br;i>=tr;i--){
            cout<<arr[i][tc]<<" ";
        }
        tc++;
       
    }

    
    
    return 0;
}