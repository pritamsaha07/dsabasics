#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int celebrity(vector<vector<int>>& v1){
    stack<int>s1;
    for (int i = 0; i < v1.size(); i++)
    {
        s1.push(i);
    }
    while(s1.size()>1){
        int temp1=s1.top();
        s1.pop();
        int temp2=s1.top();
        s1.pop();
        if(v1[temp1][temp2])
        s1.push(temp2);
        else
        s1.push(temp1);
        }

        int celeb=s1.top();

        for (int i = 0; i <v1.size(); i++)
        {
            if(i==s1.top())
            continue;

            if(v1[celeb][i]==1)
            return -1;

            if(v1[i][celeb]!=1)
            return -1;
        }
        return celeb;
        
    
}
int main(){
    vector<vector<int>>v1{ {0,0,1,1},
                           {1,0,1,0},
                           {0,0,0,0},
                           {0,1,1,0}};

    int celeb= celebrity  (v1);
    if(celeb==-1){
        cout<<"No celebrity exist"<<endl;
    }   
    else{
        cout<<"celebrity is person number"<<celeb<<endl;
    } 
    return 0;                 
                           
}