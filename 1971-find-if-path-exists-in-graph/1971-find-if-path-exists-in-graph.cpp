class Solution {
public:
    bool dfs(int node,int dest,vector<vector<int>>&adj,vector<int>&vis){
        if(node==dest) return true;
        vis[node]=1;
        for(auto &it:adj[node]){
            if(!vis[it])
            if(dfs(it,dest,adj,vis))
            return true;
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        for(auto &it:edges){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(n,0);
        return dfs(source,destination,adj,vis);
    }
};