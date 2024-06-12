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


node*merge(node* & head1, node*head2){
    node* p1=head1;
    node* p2=head2;
    node* dummyNode=new node(-1);
    node*p3=dummyNode;

    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
            
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }

    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummyNode->next;
}

node*recursive(node* &head1,node*head2){
    if(head1==NULL){
        return head2;

    }
    if(head2==NULL){
        return head1;
    }
    node*res;
    if(head1->data<head2->data){
        res=head1;
        res->next=recursive(head1->next,head2);
    }
    else{
        res=head2;
        res->next=recursive(head2->next,head2);

    }

    return res;
}

void display(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
}




int main(){
    node*head1=NULL;
    node*head2=NULL;
    int n,num,k;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        insertAttail(head1,num);
    }
     display(head1);
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        insertAttail(head2,num);
    }
    
    display(head2);

   // node*newhead=merge(head1,head2);
    node*newhead=recursive(head1,head2);
    display(newhead);
    return 0;
    }