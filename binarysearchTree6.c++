#include<iostream>
using namespace std;
struct node{
    int data;
    node*left, *right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void inorder(node*root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

vector<node*> inorder;

node* solve(int start, int end){
    if(start>end)
    return NULL;
}
int mid= (start+end)/2;
node* root=inorder(mid);
root->left=solve(start, mid-1);
root->right=solve(mid+1,end);
return root;
}