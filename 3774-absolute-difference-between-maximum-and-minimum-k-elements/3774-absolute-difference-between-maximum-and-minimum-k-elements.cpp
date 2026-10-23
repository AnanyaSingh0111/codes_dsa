class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int large=0;
        int small=0;
        for(int i=0;i<k;i++){
            small+=nums[i];
        }
        for(int i=n-1;i>=n-k;i--){
            large+=nums[i];
        }
        return large-small;
    }
};