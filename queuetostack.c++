#include<bits/stdc++.h>
using namespace std;
class que{
    stack<int> s1;
    stack<int> s2;
    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty() and s2.empty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval=s2.top();
        s2.pop();
        return topval;
    }
    bool empty(){
         if(s1.empty() and s2.empty()){
            return true;
        }
        return false;


    }

};
int main(){
    que q;
    q.push(5);
    q.push(8);
    q.push(6);
    q.push(15);
    q.push(43);
    q.push(6);
    cout<<q.pop()<<endl;
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    
    cout<<q.empty()<<endl;
    return 0;
}
 