class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<int>val;
        for(auto &it:mp){
            val.push_back(it.first);
        }
        sort(val.begin(),val.end());
        for(int i=0;i<val.size();i++){
            for(int j=i+1;j<val.size();j++){
                if(mp[val[i]]!=mp[val[j]])
                return {val[i],val[j]};
            }
        }
        return {-1,-1};
    }
};