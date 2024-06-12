class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(),t=0,m=grid[0].size(),ans=0,c=0 ;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[n][m]==2){
                    q.push({i,j});
                }
                if(grid[n][m]!=0){
                    t++;
                }
            }
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        
        while(!q.empty()){
            int k=q.size();
            c+=k;
            while(k--){
                int x=q.front().first, y=q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int nx=x+dx[i], ny=y+dy[i];
                    if(nx<0 || ny <0 || ny>=m || nx>=n || grid[nx][ny]!=1 )
                        continue;
                    grid[nx][ny]=2;
                    q.push({nx,ny});
                    
                }
            }
            if(q.empty())
                ans++;
        }
        
        return t==c? ans:-1;
        
    
    
    
    }
};