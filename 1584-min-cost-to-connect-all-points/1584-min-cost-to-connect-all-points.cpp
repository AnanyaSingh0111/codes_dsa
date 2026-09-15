class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int ans=0;
        int n=points.size();
        vector<int>vis(n,0);
        vector<int>dist(n,1e9);
        dist[0]=0;
        for(int i=0;i<n;i++){
            int node=-1;
            for(int j=0;j<n;j++){
                if(!vis[j] && (node==-1 || dist[j]<dist[node]))
                node=j;
            }
            vis[node]=1;
            ans+=dist[node];
            for(int j=0;j<n;j++){
                if(!vis[j]){
                    int distance=abs(points[node][0]-points[j][0])+
                    abs(points[node][1]-points[j][1]);
                    dist[j]=min(dist[j],distance);
                }
            }
        }
        return ans;
    }
};