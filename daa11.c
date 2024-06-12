#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>&adj, int n){

    vector<int> vis(n,0);
    queue<int>q;
    q.push(0);
    vector<int>ans;
    vis[0]=1;

    while(!q.empty()){
        int s=q.front();
        q.pop();
        ans.push_back(s);
        for(auto x: adj[s]){
            if(!vis[x]){
                vis[x]=1;
                q.push(x);
            }
        }
    }
    return ans;
}

int main(){

    vector<int> adj

}