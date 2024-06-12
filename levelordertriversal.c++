
#include<bits/stdc++.h>
#include<queue>
#include<vector>
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
vector<int> levelorder(node* root){
        int ans;
        queue <node*>q;
        if(!root)
        return ans;
        q.push(root);
        int f=1;
        while(!q.empty())
        {
          vector<int> temp;
            int n=q.size();
            while(n--)
            {
                node* t=q.front();
                q.pop();
                temp.push_back(t->data);
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
            ans.push_back(temp);
        }
        return ans;
        
    }


    int main(){
    struct node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    levelorder(root);
    return 0;
   
}