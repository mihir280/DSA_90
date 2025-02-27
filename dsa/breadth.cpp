#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
using namespace std;

void adjList(unordered_map<int,list<int>> adj,vector<vector<int>> edge){
    for(int i=0;i<edge.size();i++){
        int u=edge[i][0];
        int v=edge[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

}

void bfs(int node, unordered_map<int,list<int>> adj,vector<vector<int>> edge,unordered_map<int,bool> visited){
    queue<int> q;
    vector<int> ans;
    q.push(node);
    visited[node]=1;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        ans.push_back(front);

        for(auto i: adj[front]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }

        }


    }
    
    

}

int main(){
    
    return 0;
}