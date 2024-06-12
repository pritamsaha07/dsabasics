 #include<bits/stdc++.h>
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


 node*lca(node*root, int p, int q){
 if(!root)
 return NULL;
  if(root->data==p or root->data==q){
            return root;
        }
       
        node* left1=lca(root->left,p,q);
        node* right1=lca(root->right,p,q);
        if(left1 and right1){
            return root;
        }
        if(right1==NULL){
            return left1;
        }
        return right1;
    }

    int main(){
    struct node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    int p=4,q=5;
    cout<<lca(root,p,q)->data;
    return 0;
   
}