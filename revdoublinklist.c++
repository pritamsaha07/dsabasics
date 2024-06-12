#include<iostream>
using namespace std;
class node{
    public:
     int data;
     node* next;
     node*prev;
     node(int val){
     data=val;
     next=NULL;
     prev=NULL;
}
};
int insertattail(node* &head, int val){
    node*n =new node(val);
    if(head==NULL){
        head=n;
       return 0;
    }
   node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
    n->prev=temp;
   
    return 1;
}
void print(node*head){
    node*temp=head;
    while(temp!=NULL)
{
    cout<<temp->data<<"->";
    temp=temp->next;
}
   cout<<"NULL"<<endl;
}
node* reversedll(node* head){
    node* curr=head;
    if(curr==NULL or curr->next==NULL){
        return head;
    }
    while(curr->next!=NULL){
        curr=curr->next;
    }
    head=curr;
    curr->next=curr->prev;
    curr->prev=NULL;
    curr=curr->next;
    while(curr->prev!=NULL){
        node*temp=curr->next;
        curr->next=curr->prev;
        curr->prev=temp;
        curr=curr->next;
    }
    curr->prev=curr->next;
    curr->next=NULL;
    return head;
}
int main(){
    int n,num;
    node* head=NULL;
    cin>>n;
    for (int i = 0; i < n;i++)
    {
        cin>>num;
        insertattail(head,num);
    }
    print(head);
    node*head1=reversedll(head);
    print(head1);
    return 0;
}