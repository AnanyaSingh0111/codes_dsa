class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>freq;
        unordered_map<int,int>first;
        unordered_map<int,int>last;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x=nums[i];
            freq[x]++;
            if(first.find(x)==first.end())
            first[x]=i;
            last[x]=i;
        }
        int degree=0;
        for(auto &it:freq){
            degree=max(degree,it.second);
        }
        int ans=INT_MAX;
        for(auto &it:freq){
            if(it.second==degree)
            ans=min(ans,last[it.first]-first[it.first]+1);
        }
        return ans;
    }
};