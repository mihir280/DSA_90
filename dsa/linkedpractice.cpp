#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void InsertAthead(Node* &head,int value){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;

}
void InserAttail(Node* &head,int value){
    Node* temp=head;
    Node* newNode=new Node();
    if(head==NULL){
        newNode->data=value;
        newNode->next=head;
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

    Node* head=nullptr;
    // InsertAthead(head,1);

   for(int i=1;i<5;i++){
    InserAttail(head,i);
   }

   Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
    return 0;
}