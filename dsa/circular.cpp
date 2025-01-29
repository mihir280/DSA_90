#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void circular(Node* &head,int value){
    Node* temp=head;
    Node* newNode=new Node();
    if(head==NULL){
        newNode->data=value;
        head=newNode;
        newNode->next=head;
        return;
    }
    
    while(temp->next!=head){
        temp=temp->next;
    }
    newNode->data=value;
    newNode->next=head;
    temp->next=newNode;
}

void deleteAthed(Node* &head,int value){
    Node* temp=head;
    Node* t=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=head->next;
    head=head->next;
    delete(t);
}

Node* floyd(Node* head){
    Node* slow=head;
    Node* fast=head;
    

    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return fast;
        }
    }
    return NULL;
}

Node* startnode(Node* head){
    if(head==NULL) return NULL;

    Node* slow=head;
    Node* inter=floyd(head);

    while(slow!=inter){
        slow=slow->next;
        inter=inter->next;
    }
    return slow;

}

void remove(Node* &head){
    Node* start=startnode(head);
    Node* temp=start;
    while(temp->next!=start){
        temp=temp->next;
    }
    temp->next=NULL;
}

int main(){

    Node* head=new Node();
    head=NULL;
    circular(head,1);
    circular(head,2);
    // deleteAthed(head,1);
    cout<<floyd(head)->data;
    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    
    return 0;
}