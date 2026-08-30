class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]<nums[mini])
            mini=i;
            if(nums[i]>nums[maxi])
            maxi=i;
        }
        int front=max(mini,maxi)+1;
        int back=max(n-mini,n-maxi);
        int mixed1=mini+1+n-maxi;
        int mixed2=maxi+1+n-mini;
        return min({front,back,mixed1,mixed2});
    }
};