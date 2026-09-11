class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>>dist(n,vector<int>(n,1e9));
        for(int i=0;i<n;i++){
            dist[i][i]=0;
        }
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            int w=it[2];
            dist[u][v]=w;
            dist[v][u]=w;
        }
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
        }
        vector<int>count(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if(dist[i][j]<=distanceThreshold)
                count[i]++;
            }
        }
        int ans=-1;
        int mini=1e9;
        for(int i=0;i<n;i++){
            if(count[i]<=mini){
                mini=count[i];
                ans=i;
            }
        }
        return ans;
    }
};