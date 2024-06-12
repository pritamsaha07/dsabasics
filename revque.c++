#include<bits/stdc++.h>
using namespace std;
void printqueuq(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

void rev(queue<int>&q){
    if(q.empty()){
        return;
    }
    int data=q.front();
    q.pop();
    rev(q);
    q.push(data);
}
int main(){
  
   queue<int> q;
   //q.push(3);
   //q.push(5);
   int n,num;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        q.push(num);
    }
   rev(q);
   printqueuq(q);
   return 0;
}