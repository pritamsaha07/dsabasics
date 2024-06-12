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


node*reverse(struct node*&head,int k){
     node*prev=NULL;
     node*curr=head;
     node*next;
     int c=0;
    while(curr!=NULL and c<k){
        next=curr->next;

        curr->next=prev;
        prev=curr;
        curr=next;
        c++;
    }
    if(next!=NULL ){
        head->next=reverse(next,k);
    }
    return prev;
}

int main(){
    node*head=NULL;
    int n,num,k;
    cin>>n;
    cin>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        insertAttail(head,num);
    }
    display(head);
    node*newhead=reverse(head,k);
    display(newhead);
    return 0;
    }