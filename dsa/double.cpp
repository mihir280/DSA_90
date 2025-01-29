#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

};

void InserAthead(Node* &head,int value){
    Node* newNode=new Node();
    if(head==NULL){
        newNode->data=value;
        newNode->next=NULL;
        newNode->prev=NULL;
        head=newNode;
        return;

    }
    newNode->data=value;
    head->prev=newNode;
    newNode->next=head;
    newNode->prev=NULL;
    head=newNode;
}

void InsertAttail(Node* &head,int value){
    Node* newNode=new Node();
    Node* temp=head;
    if(head==NULL){
        newNode->data=value;
        newNode->next=NULL;
        newNode->prev=NULL;
        head=newNode;
        return;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }
    newNode->data=value;
    newNode->next=NULL;
    newNode->prev=temp;
    temp->next=newNode;
}

void deleteathead(Node* &head){
    Node* temp=head;
    head=head->next;
    head->prev=NULL;
    delete(temp);
}

void deleteAttail(Node* &head){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* tempo=temp;
    temp->prev->next=NULL;
    delete(tempo);
}

void deleteatMiddle(Node* & head){
    Node* temp=head;
    int count=0;
    while(count<3){
        
    }
}

int main(){

    Node* head=NULL;

    for(int i=1;i<6;i++){
        // InserAthead(head,i);
        InsertAttail(head,i);
    }

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;

    // deleteathead(head);
    deleteAttail(head);
    Node* temp1=head;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }cout<<endl;
    
    return 0;
}