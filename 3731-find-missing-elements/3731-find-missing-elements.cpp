class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int x:nums){
            if(x<mini)
            mini=x;
            if(x>maxi)
            maxi=x;
        }
        vector<int>missing;
        set<int>st(nums.begin(),nums.end());
        for(int i=mini;i<=maxi;i++){
            if(st.count(i))
            continue;
            else
            missing.push_back(i);
        }
        return missing;
    }
};