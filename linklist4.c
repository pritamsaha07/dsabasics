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
int main(){
    struct node*head;
    struct node*num,*prev;
    //num=(struct node*) malloc(sizeof(struct node));
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        num=(struct node*) malloc(sizeof(struct node));
       
        scanf("%d",&num->data);
        //num->next=NULL;
        
        

    }
    num->next=NULL;
    while(num!=NULL){
        printf("%d",num->data);
        num=num->next;
    }
    
    
    
    //linklisttraversal(num);
    return 0;
}

