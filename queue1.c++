
#include<iostream>

using namespace std;
#define n 20
class queue
{
    int *arr;
    int front;
    int back;

    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"Queue overfolw"<<endl;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }

    void pop(){
        if(front==-1||front>back){
            cout<<"No elemenets in Queue"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1||front>back){
            cout<<"No elemenets in Queue"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front==-1||front>back){
            
            return true;
        }
        return false;

    }
};
int main(){
    queue q;
    q.push(5);
    q.push(8);
    q.push(6);
    q.push(15);
    q.push(43);
    q.push(6);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<q.empty()<<endl;
    return 0;
}




















