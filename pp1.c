#include <stdio.h>
#include <stdlib.h>
struct node
{ 
    int roll;
    char branch[20];
    char name[30];
    float cg;
    int data;
    struct node*left, *right;
};
struct node* input(struct node* root,int roll){
    struct node *newnode = (struct tree *)malloc(sizeof(struct node));
    newnode->data = roll;
    printf("Enter Name: ");
    scanf("%s", &newnode->name);
    printf("Enter Branch: ");
    scanf("%s", &newnode->branch);
    printf("Enter CGPA: ");
    scanf("%f", &newnode->cg);
    root->left= NULL;
    root->right= NULL;
    
   
   if (root== NULL)
{ 
    root=newnode;
    
}

    if(roll<root->data){
        root->left=input(root->left,roll);
    }
    else if(roll>root->data){
        root->right=input(root->right,roll);
    }
    return root;


    
}
struct node*searchinBST(struct node* root, int key){
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
struct node*inordersucc(struct node* root){
    struct node*curr=root;
    while(curr && curr->left != NULL){
        curr=curr->left;
    }
    return curr;
}

struct node*delinBST(struct node*root, int key){
    if(key<root->data){
        root->left=delinBST(root->left, key);
    }
    else if(key>root->data){
        root->right=delinBST(root->right,key);
    }
    else {
        if(root->left==NULL){
           struct node*temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            struct node*temp=root->left;
            free(root);
            return temp;
        }
        struct node*temp=inordersucc(root->right);
        root->data=temp->data;
        root->right=delinBST(root->right,temp->data);
    }
    return root;
    
}


void printdata(struct node *T)
{
    if (T != NULL)
    {
        if (T->cg > 6.0)
        {
            
            printf("RollNo.: %d\n", T->roll);
            printf("Name: %s\n", T->name);
            printf("Branch: %s\n", T->branch);
            printf("CGPA: %.2f\n", T->cg);
        }
        printdata(T->left);
        printdata(T->right);
    }
}

int main(){
   
    struct node* root=NULL;
    int num;
    printf("Enter the roll number : ");
            scanf("%d", &num);
            root=input(root, num);

            
    
    
     searchinBST(root,3);
     delinBST(root, 2);
     printdata(root);

     


     return 0;



}

