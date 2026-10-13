class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=abs(nums[i]);
        }
        sort(ans.begin(),ans.end());
        long long pos=0,neg=0;
        for(int i=0;i<n/2;i++){
            neg+=ans[i]*ans[i];
        }
        for(int i=n/2;i<n;i++){
            pos+=ans[i]*ans[i];
        }
        return pos-neg;
    }
};