class Solution {
public:
    bool dfs(int row,int col,int prow,int pcol,vector<vector<char>>&grid,vector<vector<int>>&vis){
        vis[row][col]=1;
        int n=grid.size();
        int m=grid[0].size();
        int drow[]={0,-1,0,1};
        int dcol[]={-1,0,1,0};
        for(int i=0;i<4;i++){
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            if(nrow<0 || nrow>=n || ncol<0 || ncol>=m)
            continue;
            if(nrow==prow && ncol==pcol)
            continue;
            if(grid[row][col]!=grid[nrow][ncol])
            continue;
            if(vis[nrow][ncol])
            return true;
            if(dfs(nrow,ncol,row,col,grid,vis))
            return true;
        }
        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j])
                if(dfs(i,j,-1,-1,grid,vis))
                return true;
            }
        }
        return false;
    }
};