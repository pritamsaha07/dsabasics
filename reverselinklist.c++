#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
 node*head,*tail;

int insertAttail(node* &head,int val){
    node*n=new node(val);
    if(head==NULL){
        head=n;
        return 0;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    return 1;
}

void display(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
}


node*reverse(struct node*&head){
     node*prev=NULL;
     node*curr=head;
     node*next;
    while(curr!=NULL){
        next=curr->next;

        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
int main(){
    node*head=NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    
    display(head);
    
    node*newhead=reverse(head);
    display(newhead);
    return 0;
    
}
