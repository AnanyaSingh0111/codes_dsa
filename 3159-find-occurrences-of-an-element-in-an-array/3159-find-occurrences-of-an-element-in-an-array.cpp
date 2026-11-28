class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int n=queries.size();
        vector<int>ans(n,-1);
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(int i=0;i<n;i++){
            int k=queries[i];
            if(k<=mp[x].size())
            ans[i]=mp[x][k-1];
        }
return ans;
    }
};