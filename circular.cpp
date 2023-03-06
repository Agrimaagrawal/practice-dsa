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
void insertafterhead(node* &head,int data){
    node*temp=new node(data);
    head->next=temp;
    temp->next=head;
    head=temp;


}
void print(node* &head){
    node*temp=head;
    while(temp->next!=head){
        cout<<temp->data;
        temp=temp->next;
    }
}
 int main(){
    node *temp=new node(9);
    node*head=temp;
    
    insertafterhead(head,34);
    print(head);
    return 0;

 }