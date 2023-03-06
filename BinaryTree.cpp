#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }
};
node*buildTree(node*root){
    cout<<"enter data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter data for left:"<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter data for right:"<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void levelorder(node*root){
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
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
void preorder(node*root){
    if(root==NULL){
        return ;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}
int main(){
    node*root=NULL;
    root=buildTree(root);

    postorder(root);
    return 0;

}