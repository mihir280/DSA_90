#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* reversing(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* nex=NULL;
    while(curr!=NULL){
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
        
    }
    return prev;

}

Node* kreversal(Node* &head,int k){

    Node* prev=NULL;
    Node* curr=head;
    Node* nex=NULL;
    int count=0;
    
    while(count<k && curr!=NULL){
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
        count++;
    }

    if(nex!=NULL)
    head->next=kreversal(nex,k);

    return prev;

}

void InsertatTail(Node* &head,int value){
    Node* temp=head;
    Node* newNode=new Node();
    if(head==NULL){
        newNode->data=value;
        newNode->next=NULL;
        head=newNode;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    newNode->data=value;
    newNode->next=NULL;
    temp->next=newNode;
}

int main(){

    Node* head=NULL;

    for(int i=1;i<6;i++){
        InsertatTail(head,i);
    }

    Node* temp1=head;
    cout<<"Before Reversing"<<endl;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }cout<<endl;

    cout<<"Afetr rversing"<<endl;
    head= kreversal(head,2);
    Node* temp2=head;
    while(temp2!=NULL){
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    
    return 0;
}