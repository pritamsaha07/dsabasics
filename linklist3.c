#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void linklisttraversal(struct node*ptr){
    while(ptr!=NULL){
    printf("Element: %d\n",ptr->data);
    ptr=ptr->next;
    }

}
struct node*daf(struct node*head){
    struct node*p=head;
    head=head->next;
    free(p);
    return head;

}

struct node*dai(struct node*head, int index){
    struct node*p=head;
    struct node*q=head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
struct node*dae(struct node*head){
    struct node*p=head;
    struct node*q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;

}
int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    struct node*fifth;
    
    head=(struct node*) malloc(sizeof(struct node));
    second=(struct node*) malloc(sizeof(struct node));
    third=(struct node*) malloc(sizeof(struct node));
    fourth=(struct node*) malloc(sizeof(struct node));
    fifth=(struct node*) malloc(sizeof(struct node));
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=66;
    third->next=fourth;
    fourth->data=79;
    fourth->next=fifth;
    fifth->data=43;
    fifth->next=NULL;


    linklisttraversal(head);
    //head=daf(head);
    //head=dai(head, 4);
    head=dae(head);
    linklisttraversal(head);
    return 0;
}

