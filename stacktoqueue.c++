#include<bits/stdc++.h>
using namespace std;
class sta{
    int N;
    queue<int>q1;
    queue<int>q2;
    public:
    void Stack(){
        N=0;
    }
    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int>temp=q1;
        q1=q2;
        q2=temp;
    }
    void pop(){
        q1.pop();
        N--;
    }
    int top(){
        return q1.front();

    }
    int size(){
        return N;
    }
};

int main(){
    sta st;
    st.push(4);
    st.push(7);
    st.push(4);
    st.push(3);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    return 0;



}