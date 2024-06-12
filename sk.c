#include <stdio.h>
#include <stdlib.h>
 

typedef struct node {
    char data;
    struct node *left, *right;
} node;
 

char* add(node** p, char* a)
{
 
    
    if (*a == '\0')
        return '\0';
 
    while (1) {
        char* q = "null";
        if (*p == NULL) {
 
            node* nn = (node*)malloc(sizeof(node));
             nn->left = NULL;
            nn->right = NULL;
            nn->data = *a;
           
            *p = nn;
        }
        else {
 
            if (*a >= 'a' && *a <= 'z') {
                return a;
            }
 
           
            q = add(&(*p)->left, a + 1);
 
           
            q = add(&(*p)->right, q + 1);
 
            return q;
        }
    }
}
 

void inr(node* p) 
{
    if (p == NULL) {
        return;
    }
    else {
        
        printf("%c ", p->data);
        inr(p->left);
        inr(p->right);
        
    }
}
 

void postr(node* p)
{
    if (p == NULL) {
        return;
    }
    else {
        postr(p->left);
        postr(p->right);
        printf("%c ", p->data);
    }
}
 

int main()
{
    node* s = NULL;
    char a[] = " a b + c d - *";
    add(&s, a);
    printf("The Postfix expression is:\n ");
    postr(s);
    printf("\nThe prefix expression is:\n ");
    inr(s);
    printf("\n");
   
    return 0;
}