class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int k=0;
        int i=1;
        int n=nums.size();
        int count=0;
        while(i<n-1){
            if(nums[i]==nums[k]){
                i++;
                continue;
            }
            int j=i+1;
            while(j<n && nums[i]==nums[j])
            j++;
            if(j==n)
            break;
            if((nums[i]>nums[k] && nums[i]>nums[j]) || (nums[i]<nums[k] && nums[i]<nums[j]))
            count++;
            k=i;
            i++;

        }
        return count;
    }
};