#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> ans;
    vector<int> prefix;
    int k;
    for(int i=0;i<ans.size();i++){
        prefix[i]+=ans[i];
    }
    int ansi;
    unordered_map<int,int> f;
    for(int i=0;i<ans.size();i++){
        if(f.find(prefix[i]-k)!=f.end()){
            ansi+=f[prefix[i]-k];
        }
        f[prefix[i]]++;
    }

    return 0;
}