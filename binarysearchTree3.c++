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
node*construct(int preorder[], int *preorderidx, int key, int min ,int max,int n){
    if(*preorder>=n){
        return NULL;
    }
    node*root=NULL;
    if(key>min && key < max){
        root=new node(key);
        *preorderidx=*preorderidx+1;
        if(*preorderidx<n){
            root->left=construct(preorder, preorderidx, preorder[*preorderidx], min ,key,n );
            
        }
        if(*preorderidx<n){
            root->right=construct(preorder, preorderidx, preorder[*preorderidx], key , max ,n);
        }
    }
    return root;
}
void prinpreorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    prinpreorder(root->left);
    prinpreorder(root->right);
}
int main(){
    int preorder[]={10,2,1,13,11};
    int n=5;
    int preorderidx=0;
    node* root =construct(preorder,&preorderidx, preorder[0], INT_MIN,INT_MAX,n);
    prinpreorder(root);
}