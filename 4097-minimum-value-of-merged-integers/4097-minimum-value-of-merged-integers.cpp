class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int ans=0;
        for(int i=1;i<n;i+=2){
            int temp=nums[i];
                int digit=0;
                while(temp){
                    digit++;
                    temp/=10;
                }
                ans=nums[i-1]*pow(10,digit)+nums[i];
            mini=min(mini,ans);
        }
        return mini;
    }
};