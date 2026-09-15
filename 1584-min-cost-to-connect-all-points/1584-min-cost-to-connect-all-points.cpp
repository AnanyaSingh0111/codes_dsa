class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int ans=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int n=points.size();
        vector<int>vis(n,0);
        pq.push({0,0});
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int cost=it.first;
            int node=it.second;
            if(vis[node]) continue;
            vis[node]=1;
            ans+=cost;
            for(int j=0;j<n;j++){
                if(!vis[j]){
                    int dist=abs(points[node][0]-points[j][0])+
                    abs(points[node][1]-points[j][1]);
                    pq.push({dist,j});
                }
            }
        }
        return ans;
    }
};