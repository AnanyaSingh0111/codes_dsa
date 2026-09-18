class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int neg=lower_bound(nums.begin(),nums.end(),0)-nums.begin();
        int pos=nums.end()-lower_bound(nums.begin(),nums.end(),1);
        return max(pos,neg);
    }
};