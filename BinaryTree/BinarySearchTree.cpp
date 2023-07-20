#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node*insert(node*root,int d){
    if(root==NULL){
        root=new node(d);
        return root;
    }
    if(d>root->data){
        root->right=insert(root->right,d);
    }
    else{
        root->left=insert(root->left,d);
    }
    return root;
}
void takeinput(node*&root){
    int d;
    cin>>d;
    while(d!=-1){
        root=insert(root,d);
        cin>>d;
    }
}
void levelordertraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp=q.front();
        
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
            
        }
        else{
            cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
    }
}
int main(){
    node*root=NULL;
    takeinput(root);
    levelordertraversal(root);
    return 0;

 }