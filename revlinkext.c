#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head,*tail;
void addnode(struct node*newnode,int data){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
    
}
struct node*reverse(struct node**head){
     struct node*prev=NULL;
     struct node*curr=head;
     struct node*next;
    while(curr!=NULL){
        next=curr->next;

        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
void display(struct node*ptr){
    ptr=head;
    while(ptr!=NULL){
        printf("%d->", ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
    
}
int main(){
    int n;
    int num;
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*newhead=(struct node*)malloc(sizeof(struct node));
    scanf("%d",& n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        addnode(head,num);
    }
    display(head);
    newhead=reverse(head);
    display(newhead);
    return 0;

}

