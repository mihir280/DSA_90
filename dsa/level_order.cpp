#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int data;
    Node* right;
    Node* left;
};

void Level(Node* root){
    if(root==NULL)return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* node=q.front();
        q.pop();

        if(node!=NULL){

            cout<<node->data<<" ";

            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }



        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }


    
}

int main(){
    
    return 0;
}