#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
Node * buildtree(Node* root){
    int data;
    cout<<"enter data";
    cin>>data;
    root=new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter data for left of"<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data for right of "<<data<<endl;
    root->right=buildtree(root->right);
    return root;
}
//recursive way
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data;
    preorder(root->left);
    
    preorder(root->right);
}
//iterative way
void iterativepreorder(Node* root){
    stack<Node*>s;
    s.push(root);
    while(!s.empty()){
        Node*temp=s.top();
        cout<<temp->data;
        s.pop();
        if(temp->right){
            s.push(temp->right);
        }
        if(temp->left){
            s.push(temp->left);
        }
    }
}
int main(){
    Node*root=new Node(NULL);
    Node*l=buildtree(root);
    preorder(l);
    return 0;


}