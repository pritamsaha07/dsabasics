#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node*head,*tail;

void addnode(int data)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node)); 
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
void linklisttraversal()
{
    struct node*ptr=head;
    while(ptr!=NULL){
    printf("Element: %d\n",ptr->data);
    ptr=ptr->next;
    }

}
int main()
{
    int n,num;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        addnode(num);
    }
    
    
    linklisttraversal();
    return 0;
}