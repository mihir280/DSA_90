#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        left=NULL;
        right=NULL;


    }
};

pair<int,int> diameter(Node* root){
    if(root==NULL){
        pair<int,int> p=make_pair(0,0);
        return p;

    }

    pair<int,int> left=diameter(root->left);
    pair<int,int> right=diameter(root->right);

    int op1=left.first;
    int op2=right.first;
    int op3=left.second+right.second+1;

    pair<int,int> ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second)+1;

    return ans;

}

int main(){
    
    return 0;
}