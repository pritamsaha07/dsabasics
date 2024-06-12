#include<bits/stdc++.h>
using namespace std;
bool iscycle(int n,vector<int>adj){
    vector<int> vis(n,0);
    queue<int> q;
        q.push(1);
        vis[1]=true;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            vector<int>::iterator it;
            for (it = adj[node].begin(); it!=adj[node].end(); it++)
            {
                if(vis[*it]==1){
                    return true;
                }
               if(!vis[*it]){
                   vis[*it]=1;
                   q.push(*it);
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
    iscycle(n,a);
    return 0;
    
}