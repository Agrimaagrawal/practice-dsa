#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertBeforehead(node* &head,int data){
    node* temp=new node(data);
    temp->next=head;
    head=temp;
}
void insertAfterHead(node* &tail,int data){
    node* temp=new node(data);
    tail->next=temp;
    tail=temp;
}
void deletehead(node* &head){
    node*temp=head;
    head=head->next;
    delete(temp);
}
void deletetail(node * &tail,node* &head){
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node*t=tail;
    temp->next=NULL;
    tail=temp;
    delete(t);
    
}
void deleteatposition(node* &head,int pos){
    node*prev=NULL;
    node*curr=head;
    int count=1;
    while(count<pos){
        prev=curr;
        curr=curr->next;
        count++;
    }
    prev->next=curr->next;
    delete(curr);

}
void print(node* &head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    node* temp=new node(9);
    node*head=temp;
    node*tail=temp;
    insertAfterHead(tail,9);
    insertAfterHead(tail,8);
    insertAfterHead(tail,7);
    insertAfterHead(tail,3);
    deleteatposition(head,2);
    print(head);

    return 0;


 }