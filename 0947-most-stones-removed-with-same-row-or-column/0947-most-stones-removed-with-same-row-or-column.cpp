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
        return;
        if(rank[rootU]<rank[rootV]){
            parent[rootU]=rootV;
        }
        else if(rank[rootV]<rank[rootU]){
            parent[rootV]=rootU;
        }
        else{
            parent[rootU]=rootV;
            rank[rootV]++;
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        vector<int>parent(n);
        vector<int>rank(n,0);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(stones[i][0]==stones[j][0] ||
                stones[i][1]==stones[j][1])
                Union(i,j,parent,rank);
            }
        }
        int component=0;
        for(int i=0;i<n;i++){
            if(parent[i]==i)
            component++;
        }
        return n-component;
    }
};