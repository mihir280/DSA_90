#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        right=left=NULL;
    }


};

bool searchBST(Node* root,int key){

    if(root==NULL) return false;

    if(root->data==key){
        return true;
    }else if(key<root->data){
        searchBST(root->left,key);
    }else{
        searchBST(root->right,key);
    }

    return false;

}

Node* minValue(Node* root){
    if(root==NULL){
        return NULL;
    }

    Node* temp=root;

    while(temp->left!=NULL){
        temp=temp->left;
    }

    return temp;
}

Node* maxValue(Node* root){
    if(root==NULL){
        return NULL;
    }

    Node* temp=root;


    while(temp->right!=NULL){
        temp=temp->right;
    }

    return temp;
}

Node* insertBST(Node* root,int value){


    if(root==NULL){
        return new Node(value);        
    }

    if(value<root->data){
       root->left = insertBST(root->left,value);
        
    }else if(value>root->data){
        root->right = insertBST(root->right,value);
    }

    return root;



}

int main(){


    
    return 0;
}