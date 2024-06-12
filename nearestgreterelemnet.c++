#include<bits/stdc++.h>
using namespace std;
vector<int>nearestgreat(vector<int>&v1){
    vector<int>answer(v1.size());
    stack<int>s1;
    int arr_size=v1.size()-1;
    for (int i = v1.size()-1;i>=0; i--)
    {
        int temp;
        if(s1.empty())
        temp=-1;

        else if(s1.top()>v1[i])
        temp=s1.top();

        else if(s1.top()<=v1[i]){
            while(!s1.empty() && s1.top()<=v1[i])
            s1.pop();
            if(s1.empty())
            temp=-1;
            else
            temp=s1.top();
        }
        s1.push(v1[i]);
        answer[arr_size]=temp;
        arr_size--;
    }
    return answer;

    
}
int main(){
    vector<int> v1{1,6,2,5,3,4};

    cout<<"Element of vector:";
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";

    cout<<endl;
    vector<int>v2;

    v2=nearestgreat(v1);

    for (int i = 0; i < v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    return 0;
    
}