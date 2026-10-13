class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        long long sum=0;
        int ans=1;
        while(i<n){
            int j=i;
            sum=0;
            int rem=nums[i]%k;
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