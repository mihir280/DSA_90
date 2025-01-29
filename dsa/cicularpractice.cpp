#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

void InsertionAthead(Node* &head,int value){
    Node* newNode=new Node();
    Node* temp=head;
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
    head=newNode;
    temp->next=head;

}

void InsertAttail(Node* &head,int value){
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

void deleteAthead(Node* &head){
    Node* temp=head;
    Node* tempo=head;
    if(head==NULL){
        return ;
    }
    while(tempo->next!=head){
        tempo=tempo->next;
    }
    head=head->next;
    tempo->next=head;
    delete(temp);
}

void deleteAtTail(Node* &head){
    Node* temp=head;
    Node* tempo=NULL;
    if(head==NULL){
        return;
    }
    while(temp->next->next!=head){
        temp=temp->next;
    }
    tempo=temp->next;
    temp->next=head;
    delete(tempo);

}

void DeleteAtgiven(Node* &head,int value){
    Node* temp=head;
    Node* tempo=NULL;
    int count=0;
    int a=value-2;

    while(count<a){
        temp=temp->next;
        count++;
    }
    tempo=temp->next;
    temp->next=temp->next->next;
    delete(tempo);

}

int main(){
    Node* head=NULL;

    

    for(int i=1;i<6;i++){
        // InsertionAthead(head,i);
        InsertAttail(head,i);

    }
    cout<<"Before detion"<<endl;

    Node* temp1=head;
    do{
        cout<<temp1->data<<" ";
        temp1=temp1->next;

    }while(temp1!=head);
    cout<<endl;


    cout<<"After Deletion"<<endl;

     DeleteAtgiven(head,2);

     Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;

    }while(temp!=head);
    
    return 0;
}