#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data=value;
        left=right=NULL;
    }

};

void Right(Node* root){

    if(root==NULL){
        return;
    }

    queue<Node*> q;

    q.push(root);
    while(!q.empty()){
        int n=q.size();

        for(int i=0;i<n;i++){
            Node* curr= q.front();
            q.pop();

            if(i==n-1){
                cout<<curr->data<<" ";
            }

            if(curr->left){
                q.push(curr->left);
            }

            if(curr->right){
                q.push(curr->right);
            }
        }
    }



}

void Left(Node* root){

    if(root==NULL){
        return;
    }

    queue<Node*> q;

    q.push(root);
    while(!q.empty()){
        int n=q.size();

        for(int i=0;i<n;i++){
            Node* curr= q.front();
            q.pop();

            if(i==0){
                cout<<curr->data<<" ";
            }

            if(curr->left){
                q.push(curr->left);
            }

            if(curr->right){
                q.push(curr->right);
            }
        }
    }



}

int main(){
    
    return 0;
}