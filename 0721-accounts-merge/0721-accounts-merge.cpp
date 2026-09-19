class DisjointSet{
    vector<int>rank,parent;
    public:
    DisjointSet(int n){
        parent.resize(n+1,0);
        rank.resize(n+1);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }
    int findParent(int x){
        if(parent[x]==x)
        return x;
        return parent[x]=findParent(parent[x]);
    }
    void Union(int u,int v){
        int rootU=findParent(u);
        int rootV=findParent(v);
        if(rootU==rootV) return;
        if(rank[rootU]<rank[rootV])
        parent[rootU]=rootV;
        else if(rank[rootV]<rank[rootU])
        parent[rootV]=rootU;
        else{
            parent[rootU]=rootV;
            rank[rootV]++;
        }
    }
};
class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n=accounts.size();
        DisjointSet ds(n);
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++){
            for(int j=1;j<accounts[i].size();j++){
                if(mp.find(accounts[i][j])==mp.end())
                mp[accounts[i][j]]=i;
                else{
                    ds.Union(i,mp[accounts[i][j]]);
                }
            }
        }
        vector<string>mergeMail[n];
        for(auto it:mp){
            string mail=it.first;
            int node=ds.findParent(it.second);
            mergeMail[node].push_back(mail);
        }
        vector<vector<string>>ans;
        for(int i=0;i<n;i++){
            if(mergeMail[i].size()==0)
            continue;
            sort(mergeMail[i].begin(),mergeMail[i].end());
            vector<string>temp;
            temp.push_back(accounts[i][0]);
            for(auto it:mergeMail[i])
            temp.push_back(it);
            ans.push_back(temp);
        }
        return ans;
    }
};