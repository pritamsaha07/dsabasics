#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void linklisttraversal(struct node*ptr){
    while(ptr!=NULL){
    printf("Element: %d->", ptr->data);
    ptr=ptr->next;
    }

}

struct node*reverse(struct node**head){
    struct node*prev=NULL;
    struct node*curr=head;
    struct node*next;
    
    while(curr!=NULL ){
        next=curr->next;

        curr->next=prev;
        prev=curr;
        curr=next;
    
    }
    return prev;
}
int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*new_head;
    
    head=(struct node*) malloc(sizeof(struct node));
    second=(struct node*) malloc(sizeof(struct node));
    third=(struct node*) malloc(sizeof(struct node));
    new_head=(struct node*) malloc(sizeof(struct node));

    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=66;
    third->next=NULL;
    linklisttraversal(head);
    new_head=reverse(head);
    printf("\nAfter Reversing the link list\n");
    linklisttraversal(new_head);
    return 0;
}

