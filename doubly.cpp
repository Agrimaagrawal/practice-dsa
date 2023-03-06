#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node*prev;
    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertathead(node* &head,int data){
    node* temp=new node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
void insertafterhead(node* &tail,int data){
    node* temp=new node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

}
void insertatpos(node* &head,int data,int pos){
    node *newnode=new node(data);
    node *temp=head;
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
     temp->next->prev=newnode;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
   

}
void deleteathead(node* head){
    node*temp=head;
    head=temp->next;
    temp->next->prev=NULL;

}
void deleteattail(node* &tail,node* &head){
    node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;

    }
    temp->next=NULL;
    tail->prev=NULL;
    tail=temp;
}

void print(node* &head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
void deleteatpos(node* &head,int pos){
    node*curr=head;
    node*prev1=NULL;
    int count=1;
    while(count<pos){
        prev1=curr;
        curr=curr->next;
        count++;
    }
    prev1->next=curr->next;
    curr->next->prev=curr->prev;
    delete(curr);
    
}
void reverse(node* &head){
    node*curr=head;
    node*prev1=NULL;
    while(curr!=NULL){
        node*forward=curr->next;
        curr->next=prev1;
        forward->prev=forward->next;
        curr->prev=forward;
        prev1=curr;
        curr=forward;
    }

}

 int main(){
    node* temp=new node(10);
    node*head=temp;
    node*tail=temp;
    insertathead(head,20);
    insertafterhead(tail,80);
    insertatpos(head,30,2);
    reverse(head);

    print(head);

    return 0;
 }