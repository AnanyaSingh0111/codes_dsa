class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        map<pair<int,int>,int>mp;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])
            ans++;
            else{
                int x=min(nums[i],nums[i+1]);
                int y=max(nums[i],nums[i+1]);
                mp[{x,y}]++;
            }
        }
        int maxi=0;
        for(auto it:mp){
            maxi=max(maxi,it.second);
        }
        return ans+maxi;
    }
};