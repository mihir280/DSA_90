#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
using namespace std;

int main(){

    unordered_map<int,list<int>> adj;
    int v;
    vector<vector<int>> e;
    for(int i=0;i<e.size();i++){
        int u=e[i][0];
        int v=e[i][1];

        adj[u].push_back(v);
    }

    vector<int> indegree;
    for(auto i:adj){
        for(auto j:i.second){
            indegree[j]++;
        }
    }

    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    // for cycle detection make a count;
    int count=0;
    vector<int> ans;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        count++;
        ans.push_back(front);

        for(auto i:adj[front]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push(i);
            }
        }


    }

    if(count==v){
        cout<<"false";
    }else{
        cout<<"true";
    }


    
    return 0;
}