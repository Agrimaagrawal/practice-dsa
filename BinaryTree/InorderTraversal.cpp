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
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
//iterative way
void iterativeinorder(Node* root){
    if(root==NULL){
        return;
    }
    stack<Node*>s;
    
    Node*curr=root;
    while(!s.empty()||curr!=NULL){
        if(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        else{curr=s.top();
        cout<<curr->data;
        s.pop();
        curr=curr->right;    
        }    
    }
}
int main(){
    Node*root=new Node(NULL);
    Node*l=buildtree(root);
    iterativeinorder(l);
    return 0;


}