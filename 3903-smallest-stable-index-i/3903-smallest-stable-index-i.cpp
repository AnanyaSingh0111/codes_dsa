class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int maxi=INT_MIN;
            for(int j=0;j<=i;j++){
                maxi=max(maxi,nums[j]);
            }
            int mini=INT_MAX;
            for(int j=i;j<n;j++){
                mini=min(mini,nums[j]);
            }
            if(maxi-mini<=k)
            return i;
            i++;
        }
        return -1;
    }
};