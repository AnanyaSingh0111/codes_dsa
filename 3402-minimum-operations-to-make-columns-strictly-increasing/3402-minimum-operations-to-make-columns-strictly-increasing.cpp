class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int total=0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]>=grid[i+1][j]){
                    total+=(grid[i][j]+1)-grid[i+1][j];
                    grid[i+1][j]=grid[i][j]+1;
                }
            }
        }
        return total;
    }
};