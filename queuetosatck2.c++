#include<bits/stdc++.h>
using namespace std;
class que{
    stack<int> s1;
    
    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        int x=s1.top();;
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item= pop();                                                                    
        s1.push(x);
        return item;
    }
    bool empty(){
         if(s1.empty() ){
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
