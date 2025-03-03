#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        left=right=NULL;

    }
};

bool isSameTree(Node *root1,Node *root2){
    if(root1==NULL && root2==NULL){
        return true;
    }

    if(root1==NULL && root2!=NULL){
        return false;
    }
    if(root1!=NULL && root2==NULL){
        return false;
    }

    bool left=isSameTree(root1->left,root2->left);
    bool right=isSameTree(root1->right,root2->right);

    bool curr=root1->data==root2->data;
    if(left && right && curr){
        return true;
    }else{
        return false;
    }


}
int main(){
    
    return 0;
}