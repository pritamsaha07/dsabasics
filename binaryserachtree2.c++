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
node*searchinBST(node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key){
        return searchinBST(root->left, key);
    }
    return searchinBST(root->right, key);
}
node*inordersucc(node* root){
    node*curr=root;
    while(curr && curr->left != NULL){
        curr=curr->left;
    }
    return curr;
}

node*delinBST(node*root, int key){
    if(key<root->data){
        root->left=delinBST(root->left, key);
    }
    else if(key>root->data){
        root->right=delinBST(root->right,key);
    }
    else {
        if(root->left==NULL){
            node*temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            node*temp=root->left;
            free(root);
            return temp;
        }
        node*temp=inordersucc(root->right);
        root->data=temp->data;
        root->right=delinBST(root->right,temp->data);
    }
    return root;
    
}

void inorder(node*root){
    if(root==NULL){
        return ;
    }
    inorder(root);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    struct node*root=new node(4);
    root->left=new node(2);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
   
    root->right->right=new node(6);
    if(searchinBST(root,2)==NULL){
        cout<<"Key does'nt exist";
    }
    else{
        cout<<"Key exist";
    }
    inorder(root);
    root=delinBST(root,5);
    inorder(root);
    cout<<endl;
    return 0;
}