class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=1,max1=1,max2=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                max1++;
                ans=max(ans,max1);
                max2=1;
            }
            else if(nums[i-1]>nums[i]){
                max2++;
                ans=max(ans,max2);
                max1=1;
            }
            else{
                max1=1;
                max2=1;
            }
        }
        return ans;
    }
};