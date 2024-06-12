#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;

};
void linklisttraversal(struct node*p){
    while(p!=NULL){
    printf("%d\n",p->data);
    p=p->next;
    }
}
struct node*iaf(struct node*head, int data){
    struct node*p=(struct node*) malloc(sizeof(struct node));
    p->next=head;
    p->data=data;
    return p;
}
struct node*iai(struct node*head,int data,int index){
    struct node*p=(struct node*)malloc(sizeof(struct node));
    struct node*pi=head;
    int i=0;
    while(i!=index-1){
        pi=pi->next;
        i++;

    }
    p->data=data;
    p->next=pi->next;
    pi->next=p;
    return head;
}
struct node*iae(struct node*head,int data){
    struct node*p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    struct node*pi=head;
    while(pi->next!=NULL){
        pi=pi->next;
    }
    pi->next=p;
    p->next=NULL;
    return head;
}
int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    head=(struct node*) malloc(sizeof(struct node));
    second=(struct node*) malloc(sizeof(struct node));
    third=(struct node*) malloc(sizeof(struct node));
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=66;
    third->next=NULL;
    linklisttraversal(head);
    //head=iaf(head,56);
    head=iai(head,56,2);
    //head=iae(head,78);
    linklisttraversal(head);

    return 0;
}
