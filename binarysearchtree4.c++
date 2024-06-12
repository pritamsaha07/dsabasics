#include<iostream>
#include<climits>
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


bool isBST(node* root, node* min, node*max){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>=max->data){
        return false;
    }
    bool leftvalid=isBST(root->left, min, root);
    bool rightvalid=isBST(root->right, root, max);
    return leftvalid and rightvalid; 
}
int main(){

    node*root=new node(2);
    root->left=new node(1);
    root->right=new node(3);
   
   if(isBST(root, NULL, NULL)){
       cout<<"Valid BST"<<endl;
   }
   else{
       cout<<"invalid BST";
   }
   return 0;
}