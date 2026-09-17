class Solution {
public:
    int find(int x,vector<int>&parent){
        if(parent[x]==x)
        return x;
        return parent[x]=find(parent[x],parent);
    }
    void Union(int u,int v,vector<int>&parent,vector<int>&rank){
        int rootU=find(u,parent);
        int rootV=find(v,parent);
        if(rootU==rootV)
        return ;
        if(rank[rootU]<rank[rootV])
        parent[rootU]=rootV;
        else if(rank[rootV]<rank[rootU])
        parent[rootV]=rootU;
        else{
            parent[rootV]=rootU;
            rank[rootU]++;
        }

    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int m=connections.size();
        if(m<n-1) return -1;
        vector<int>parent(n);
        vector<int>rank(n,0);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        for(auto edge:connections){
            int u=edge[0];
            int v=edge[1];
            Union(u,v,parent,rank);
        }
        int component=0;
        for(int i=0;i<n;i++){
            if(find(i,parent)==i)
            component++;
        } 
        return component-1;
    }
};