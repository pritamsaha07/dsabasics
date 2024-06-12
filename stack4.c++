#include<bits/stdc++.h>
using namespace std;
int put_sorted(stack<int> &s1, int k){
    if(s1.empty() || s1.top()>k){
        s1.push(k);
        return 0;
    }

    int temp=s1.top();
    s1.pop();
    put_sorted(s1,k);

    s1.push(temp);
    return 0;
}
int sort_stack(stack<int> &s1){
    if(s1.empty())
    return 0;
     int temp=s1.top();
     s1.pop();
     sort_stack(s1);
     put_sorted(s1,temp);
     return 0;

}
int insertAtbottom(stack<int> &s1)
{
    if(s1.empty())
      return -1;
      cout<<s1.top()<<" ";
      int temp=s1.top();
      s1.pop();
      insertAtbottom(s1);
      s1.pop();
      return 0;
    }
int main(){
    stack<int>st;
    st.push(5);
    st.push(8);
    st.push(6);
    st.push(45);
    st.push(44);
    st.push(61);
   cout<<"stack before sorting"<<endl;
   insertAtbottom(st);
   cout<<endl;
   sort_stack(st);
   cout<<"stack sorting..."<<endl;
   cout<<"stack after sorting"<<endl;
  
   insertAtbottom(st);
   cout<<endl;
   return 0;






}