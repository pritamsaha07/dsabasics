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

void display(node*head){
    node*temp=head;
    while(temp!=NULL)
{
    cout<<temp->data<<"->";
    temp=temp->next;
}
   cout<<"NULL"<<endl;
}

node* findintersection(node* head1, node*head2){
    node*ptr1=head1;
    node*ptr2=head2;
    node* head=NULL;
    node*curr=NULL;
    while(ptr1 and ptr2){
        if(ptr1->data==ptr2->data){
            if(head==NULL){
                node*t=new node(ptr1->data);
                head=t;
                curr=t;
            }
            else{
                node*t=new node(ptr1->data);
                curr->next=t;
                curr=curr->next;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else{
            if(ptr1->data<ptr2->data){
                ptr1=ptr1->next;

            }
            else{
                ptr2=ptr2->next;
            }
        }

    }
    return head;
}

int main(){
    int n,num;
    node* head1=NULL;
    node*head2=NULL;
    cin>>n;
    for (int i = 0; i < n;i++)
    {
        cin>>num;
        insert(head1,num);
        }

   

     for (int i = 0; i < n;i++)
    {
        cin>>num;
        insert(head2,num);
    }
     display(head1);

   
    display(head2);
    cout<<findintersection(head1, head2);
    
    return 0;
    }
