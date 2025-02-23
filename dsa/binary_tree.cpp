#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertion(Node* root){

    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;

    root=new Node(data);

    if(data==-1){
        return NULL;
    }

    // left part
    cout<<"Insert in left part"<<endl;
    root->left=insertion(root->left);
    // right part
    cout<<"Insert in right part"<<endl;
    root->right=insertion(root->right);

    return root;
}

void level(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    }
}
// 1 3 7 -1 -1 11 -1 -1 5 7 -1 -1 -1

int main(){

    Node *root=NULL;
    root=insertion(root);

    level(root);
    
    return 0;
}