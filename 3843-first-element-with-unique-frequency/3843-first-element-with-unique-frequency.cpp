class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        unordered_map<int,int>freq;
        for(auto it:mp){
            freq[it.second]++;
        }
        for(int num:nums){
            if(freq[mp[num]]==1)
            return num;
        }
        return -1;
    }
};