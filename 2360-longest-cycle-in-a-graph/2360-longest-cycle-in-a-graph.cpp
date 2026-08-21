class Solution {
public:
    void dfs(int node,vector<vector<int>>&adj,vector<int>&vis,vector<int>&pathVis,vector<int>&path,int &ans){
        vis[node]=1;
        pathVis[node]=1;
        path.push_back(node);
        for(auto &it:adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis,pathVis,path,ans);
            }
            else if(pathVis[it]){
                int count=0;
                for(int i=path.size()-1;i>=0;i--){
                    count++;
                    if(path[i]==it)
                    break;
                }
                ans=max(ans,count);
            }
        }
        pathVis[node]=0;
        path.pop_back();
    }
    int longestCycle(vector<int>& edges) {
        int V=edges.size();
        vector<vector<int>>adj(V);
        vector<int>vis(V,0);
        vector<int>pathVis(V,0);
        for(int i=0;i<V;i++){
            if(edges[i]!=-1)
            adj[i].push_back(edges[i]);
        }
        int ans=-1;
        for(int i=0;i<V;i++){
            vector<int>path;
            dfs(i,adj,vis,pathVis,path,ans);
        }
        return ans;

    }
};