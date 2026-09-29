class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<int>ans;
        int maxi=0;
        for(auto it:mp){
            maxi=max(maxi,it.second);
        }
        for(int i=0;i<maxi;i++){
            for(auto &it:mp){
                if(it.second>0)
                ans.push_back(it.first);
                it.second--;
            }
        }
        return ans;
    }

};