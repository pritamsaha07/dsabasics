#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;

    }
};
int insertathead(node*head, int val){
    node*n= new node(val);
    n->next=head;
    n->prev=NULL;
    if(head!=NULL){
    head->prev=n;
    }
    head=n;
    return 0;
}
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
void insertatmid(node*&head, int val, int idx){
    node*n=new node(val);
    node*temp=head;
    int i=0;
    while(i!=idx-1){
        temp=temp->next;
        i++;
    }
    temp->next=n;
    n->prev=temp;
    n->next=temp->next;
   
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
int main(){
    int n,num;
    node* head=NULL;
    cin>>n;
    for (int i = 0; i < n;i++)
    {
        cin>>num;
        insertattail(head,num);
    }
        display(head);
        insertatmid(head,5,2);
        display(head);

return 0;
}
   
