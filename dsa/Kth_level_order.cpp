#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        int data=val;
        left=right=NULL;
    }



};

int sumAtk(Node* root,int k){

    if(root==NULL) return -1;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    int level=0;
    int sum=0;

    while(!q.empty()){
        Node* node=q.front();
        q.pop();

        if(node!=NULL){
            if(level==k){
                sum+=node->data;
            }
            if(node->left) q.push(node->left);

            if(node->right)q.push(node->right);

        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }

    return sum;

}

int Count_node(Node* root){

    if(root==NULL) return 0;


    return Count_node(root->left)+Count_node(root->right)+1;

}





int main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);

    // cout<<Sum_node(root);


   
    
    return 0;
}