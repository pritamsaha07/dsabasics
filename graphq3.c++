#include<bits/stdc++.h>
using namespace std;
int main(){
    int e,v;
    int cnt=0;
    cin>>v>>e;
    vector<vector<int>>g[e];
    vector<int>indeg(e,0);
    for(int i=0;i<v;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        indeg[y]++;
    }
    queue<int> q;
    for(int i=0;i<e;i++){
        if(indeg[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int x=q.front();
        q.pop();
        cout<<x<<endl;
        for(auto it:g[x]){
            indeg[it]--;
            if(indeg[it]==0){
                q.push(it);
            }
        }
    }
    return 0;
}