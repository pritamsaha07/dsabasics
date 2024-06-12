#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*left;
    struct node*right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
};
void printVector(const vector<int>& v, int i)
{
    for (int j=i; j<v.size(); j++)
        cout << v[j] << " ";
    cout << endl;
}
void pathksum(node*root, vector<int>&path, int k){
    if(!root)
    return ;

    path.push_back(root->data);
    pathksum(root->right,path,k);
    pathksum(root->left,path,k);

    int f=0;
    for(int i=path.size()-1;i>=0;i--){
        f+=path[i];
        if(f==k){
            printVector(path,i);

        }
    }
    path.pop_back();
}
void printKPath(node *root, int k)
{
    vector<int> path;
    pathksum(root, path, k);
}
 
// Driver code
int main()
{
    node *root = new node(1);
    root->left = new node(3);
    root->left->left = new node(2);
    root->left->right = new node(1);
    root->left->right->left = new node(1);
    root->right = new node(-1);
    root->right->left = new node(4);
    root->right->left->left = new node(1);
    root->right->left->right = new node(2);
    root->right->right = new node(5);
    root->right->right->right = new node(2);
 
    int k = 5;
    printKPath(root, k);
 
    return 0;
}