class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=1;
        long long sum=0;
        int i=0;
        while(i<n){
            int rem=nums[i]%k;
            int j=i;
            sum=0;
            while(j<n && nums[j]%k==rem){
                sum+=nums[j];
                if(sum%k==rem){
                    ans=max(ans,j-i+1);
                }
                j++;
            }
            i=j;
        }
        return ans;
    }
};