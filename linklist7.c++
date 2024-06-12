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
int inserattail(node *&head, int val){
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
bool detectloop(node* head){
    if(!head)
    return false;

    node*low=head;
    node*high=head;
    while(high!=NULL and high->next!=NULL){
        low=low->next;
        high=high->next->next;
        if(low==high){
            return true;
        }

    }
    return false;
}
int main(){
    node*head=NULL;
    int n,num;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        inserattail(head,num);
    }
    //display(head);
    //node*newhead=reverse(head);
   // display(newhead);
    cout<<detectloop(head);
    return 0;
    }
