class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int low=0;
        int n=nums.size();
        int high=n-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=k)
            high=mid;
            else
            low=mid+1;
        }
        return low;
    }
};