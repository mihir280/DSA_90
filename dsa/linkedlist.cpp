#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void InsertAttail(Node* &head,int val){
    Node* n=new Node(val);

    if(head==NULL){
        head=n;
        return ;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void InsertAthead(Node* &head,int val){
    Node* n=new Node(val);
    n->next=head;
    head=n;
}

void display(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        krevrsal(temp,2);
       
       cout<<temp->data<<" -> ";
        temp=temp->next;
         
    }
}

void searching(Node* head,int key){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            cout<<"true";
            break;
        }else{
            temp=temp->next;
        }
    }
    cout<<"False";
}
void delet(Node* &head,int key){
    Node* temp=head;
    if(head==NULL) return;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    Node* i=temp->next;
    temp->next=temp->next->next;
    free(i);
}

Node* reverseLinked(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* nex=curr->next;

    while(curr!=NULL){
        curr->next=prev;
        prev=curr;
        curr=nex->next;
        nex=nex->next;
    }

    return prev;
}

Node* krevrsal(Node* &head,int k){
    Node* prev=NULL;
    Node* curr=head;
    Node* nex=curr->next;
    int count=0;

    if(curr==NULL){
        return prev;
    }

    while(count<k){
        curr->next=prev;
        prev=curr;
        curr=nex->next;
        nex=nex->next;
        count++;

    }
    return krevrsal(curr,k);

}
int main(){
    
   Node* head=NULL;

   InsertAthead(head,1);
   InsertAttail(head,3);
   InsertAttail(head,4);
   InsertAttail(head,5);
   InsertAttail(head,6);

   display(head);





    return 0;
}