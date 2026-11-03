class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            count+=abs(nums[i]-nums[n/2]);
        }
        return count;
    }
};