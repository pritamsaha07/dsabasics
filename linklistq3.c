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
void deldup(struct node*head){
    struct node*curr,*prev,*dup;
    curr=head;
    while(curr!=NULL&&curr->next!=NULL){
        prev=curr;
        while(prev->next!=NULL){
            if(curr->data==prev->next->data){
                dup=prev->next;
                prev->next=prev->next->next;
                free(dup);

            }
            else
            prev=prev->next;
        }
        curr=curr->next;
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
    sec->data=67;
    sec->next=thr;
    thr->data=46;
    thr->next=fort;
    fort->data=67;
    fort->next=NULL;
    display(head);
    deldup(head);
    printf("After removing dup items\n");
    display(head);
    return 0;
}
