#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n , vector<int> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vis[i][j]=0;
                
            }
        }
        int c=0;
           for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] and grid[i][j]==1){
                    dfs(i,j,grid,vis,n,m);
                    c++;
                }
            }
           }
        return c;
                
        

        
    }
    
    void dfs(int i,int j,vector<vector<char>>&grid,    vector<vector<int>>& vis,int n, int m){
        if(i<0 or j<0 or i>=n or j>=m)
            return ;
        
        if(grid[i][j]==0){
            return ;
        }
        if(!vis[i][j]){
          vis[i][j]=1;
         dfs(i+1,j,grid,vis,n,m);
         dfs(i-1,j,grid,vis,n,m);
         dfs(i,j+1,grid,vis,n,m);
         dfs(i,j-1,grid,vis,n,m);
         dfs(i+1,j+1,grid,vis,n,m);
         dfs(i-1,j-1,grid,vis,n,m);
         dfs(i+1,j-1,grid,vis,n,m);
         dfs(i-1,j+1,grid,vis,n,m);
        
        }
        
        
        
    }
};