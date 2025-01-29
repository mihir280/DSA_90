#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

void InsertAttail(Node* &head,int val){
    Node* n=new Node();

    if(head==NULL){
        n->data=val;
        n->next=NULL;
        head=n;
        return ;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    n->data=val;
    n->next=NULL;
    temp->next=n;
}
Node* middle(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main(){

    Node* head=NULL;

    for(int i=1;i<7;i++){
        InsertAttail(head,i);

    }
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;

    head=middle(head);
    cout<<head->data;
    
    return 0;
}