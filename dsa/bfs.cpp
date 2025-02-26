#include<iostream>
#include<unordered_map>
// #include<set>
#include<queue>
#include<vector>
#include<list>



void lists(unordered_map<int,list<int>> &adj, vector<vector<int>> &edge){
    for(int i=0;i<edge.size();i++){
        int u=edge[i][0];
        int v=edge[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void bfs(unordered_map<int,list<int>> &adj,vector<int> &ans,unordered_map<int,bool> &visited,int node){
    queue<int> q;
    q.push(node);
    visited[node]=1;

    while(!q.empty()){
        int frontnode=q.front();
        q.pop();
    ans.push_back(frontnode);
        for(auto i:adj[frontnode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}


vector<int> bfsTraversal(int n, vector<vector<int>> &edge){
    // Write your code here.
    unordered_map<int,list<int>> adj;
    vector<int> ans;
    unordered_map<int,bool> visited;

    lists(adj,edge);

    for(int i=0;i<n;i++){
        if(!visited[i]){
            bfs(adj,ans,visited,i);
        }
    }
    return ans;
    
}

int main(){


    return 0;
}