#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }

};

int Sum_node(Node* root){

    if(root==NULL) return 0;

    return Sum_node(root->left)+Sum_node(root->right)+root->data;

}

int main(){

     Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);

    cout<<Sum_node(root);

    
    return 0;
}