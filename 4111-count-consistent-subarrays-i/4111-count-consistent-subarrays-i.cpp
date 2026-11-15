class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
        int andd=nums[i];
        int mini=INT_MAX;
        for(int j=i;j<n;j++){
            mini=min(mini,nums[j]);
            andd&=nums[j];
            if(andd==mini)
        count++;
        }
        }
        return count;
    }
};