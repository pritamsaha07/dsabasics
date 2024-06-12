#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void display(struct node*ptr){
    while(ptr!=NULL){
        printf("Elements:%d\n", ptr->data);
        ptr=ptr->next;
    }
}
void removeduplicate(struct node*head){
    struct node*curr=head;
    struct node*next;
    if(curr==NULL)
    return;
    while(curr->next!=NULL){
        if(curr->data==curr->next->data){
            next=curr->next->next;
            free(curr->next);
            curr->next=next;
        }
        else{
            curr=curr->next;
        }
    }
    
    
}
int main(){
    struct node*head;
    struct node*sec;
    struct node*thr;
    struct node*fort;
    struct node*newnode;
    head=(struct node*) malloc(sizeof(struct node));
    sec=(struct node*) malloc(sizeof(struct node));
    thr=(struct node*) malloc(sizeof(struct node));
    fort=(struct node*) malloc(sizeof(struct node));
    head->data=7;
    head->next=sec;
    sec->data=11;
    sec->next=thr;
    thr->data=66;
    thr->next=fort;
    fort->data=66;
    fort->next=NULL;
    display(head);
    removeduplicate(head);
    display(head);
    return 0;
}
