#include<iostream>
#include<vector>
using namespace std;

void compress(int arr[][4],int n){
    vector<int> ans;
    for(int i=0;i<4;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                ans.push_back(arr[j][i]);
            }
        }else{
            for(int j=n-1;j>=0;j--){
                ans.push_back(arr[j][i]);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}

int main(){
    
    return 0;
}