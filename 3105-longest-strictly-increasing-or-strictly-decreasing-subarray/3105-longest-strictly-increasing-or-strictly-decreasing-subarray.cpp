class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int j=i+1;
            while(j<n && nums[j]>nums[j-1]){
                j++;
            }
            ans=max(ans,j-i);
         j=i+1;
            while(j<n && nums[j]<nums[j-1]){
                j++;
            }
            ans=max(ans,j-i);
        }
        return ans;
    }
};