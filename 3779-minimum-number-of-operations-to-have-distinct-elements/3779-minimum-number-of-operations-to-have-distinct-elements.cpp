class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        int count=0;
        for(int x:nums){
            mp[x]++;
        }
        int duplicate=0;
        for(auto &it:mp){
            if(it.second>1)
            duplicate++;
        }
        int i=0;
        while(duplicate>0){
            if(nums.size()-i<3)
            return count+1;
            for(int j=0;j<3;j++){
                int x=nums[i];
                if(mp[x]==2)
                duplicate--;
                mp[x]--;
                i++;
            }
            count++;
        }
        return count;
    }
};