#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }

};
void insertBeforehead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAfterHead(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertATPosition(Node* &head,Node* &tail,int data,int pos){
    Node* newnode=new Node(data);
    if(pos==1){
        insertBeforehead(head,data);
        return;
    }
    int count=1;
    Node* temp=head;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    if(temp->next==NULL){
        insertAfterHead(tail,data);
        return;
    }


}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    Node* temp=new Node(10);
    Node* head=temp;
    Node* tail=temp;
    
    insertATPosition(head,tail,30,2);
    insertATPosition(head,tail,30,2);
    print(head);
    
    return 0;


 }