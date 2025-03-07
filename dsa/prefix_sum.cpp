#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int subarraySum(vector<int>& arr, int k) {
    vector<int> prefix_sum;
    int sum=0;
    for(int i=0;i<arr.size();i++){
         sum+=arr[i];
         prefix_sum.push_back(sum);
     }

     unordered_map<int,int> f;
     int ans=0;
     for(int i=0;i<arr.size();i++){
         if(prefix_sum[i]==k){
             ans++;
         }
         if(f.count(prefix_sum[i]-k)){
             ans+=f[prefix_sum[i]-k];
         }
         f[prefix_sum[i]]++;
     }
     return ans;
}

int main(){

    int arr[8]={4,7,0,11,9,7,8,3};

    vector<int> prefix_sum;
    int sum=0;
    for(int i=0;i<8;i++){
        sum+=arr[i];
        prefix_sum.push_back(sum);

    }

    for(int i=0;i<8;i++){
        cout<<prefix_sum[i]<<" ";
    }
    
    return 0;
}