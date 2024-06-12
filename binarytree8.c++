#include<iostream>
using namespace std;
struct node{
    int data;
    //int data;
    struct node*left;
    struct node*right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
};




void mirror(node*root){
    if(!root){
        return ;

    }
    mirror(root->left);
    mirror(root->right);
    swap(root->left, root->right);
}

int main(){
    struct node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    mirror(root);
    return 0;
}