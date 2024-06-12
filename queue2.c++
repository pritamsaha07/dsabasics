#include<iostream>
using namespace std;
 class node{
     public:
     int data;
     node* next;
     node(int val){
         data=val;
         next=NULL;
     }

 };
  class queue{
      node* front;
      node* back;

      public:
      queue(){
          front=NULL;
          back=NULL;
      }
      void push(int x){
          node*n= new node(x);
          if(front==NULL){
              back=n;
              front=n;
              return;
          }
          back->next=n;
          back=n;
      }
      void pop(){
          if(front==NULL){
              cout<<"queue underflow"<<endl;
              return ;
          }
          node* todel=front;
          front=front->next;

          delete todel;

      }
      int peek(){
          if(front==NULL){
              cout<<"no element in queue "<<endl;
              return -1;
          }
          return front->data;
      }
      bool empty(){
          if(front==NULL){
              
              return true;
          }
          return false;
      }

      
  };

  int main(){
    queue q;
    //q.push(5);
    //q.push(8);
    //q.push(6);
    //q.push(15);
    //q.push(43);
    //q.push(6);
    int n,num;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        q.push(num);
    }
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<q.empty()<<endl;
    return 0;
}

