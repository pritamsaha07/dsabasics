#include<bits/stdc++.h>
using namespace std;
bool checkcycle(int node,vector<int>adj[],int vis[], int dfsvis[]){
    vis[node]=1;
    dfsvis[node=1];
    for(auto i: adj[node]){
        if(!vis[i]){
            if(checkcycle(i, adj,vis,dfsvis)){
                return true;
            }
        }
            else if(dfsvis[i]){
                return true;
            }
        }
        dfsvis[node]=0;
        return false;
    
}

bool iscycle(int n, vector<int>adj[]){
    int vis[n];
    int dfsvis[n];
    memset(vis, 0, sizeof vis);
    memset(dfsvis, 0,sizeof dfsvis);
    for (int i = 0; i < n; i++)
    {
        if(!vis[i]){
            if(checkcycle(i,adj,vis,dfsvis)){
                return true;
            }
        }
    }
    return false;
    
}
int main(){
    int n,m;
    cin>>n>>m;
    int x,y;
    vector<int>a[n+1];
    for (int i = 0; i < m; i++)

    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);

        
    }
    cout<<iscycle(n,a);
    return 0;
    
}
