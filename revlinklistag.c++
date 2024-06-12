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
int insert(node*&head,int val){
    node*newnode=new node(val);
    if(head==NULL){
        head=newnode;
        return 0;
    }
    node*ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;

    }
    ptr->next=newnode;
    return 1;

}
void display(node*head){
    node*ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
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
    if(next!=NULL){
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
        insert(head,num);
    }

    display(head);
    node*nn=reverse(head,k);
    display(nn);
    return 0;
    
}