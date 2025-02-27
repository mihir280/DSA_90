#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

bool isCycle(unordered_map<int,list<int>> adjlist,unordered_map<int,bool> visited,int node,int parent ){

    visited[node]=true;
    // parent=-1;

    for(auto i:adjlist[node]){

        if(!visited[i]){
        bool detected=isCycle(adjlist,visited,i,node);
        if(detected){
            return true;
        }
    }
        else{
            if(parent!=i){
                return true;
            }
        }

        
    }

    return false;

}

int main(){

    int n,m;

    
    
    return 0;
}