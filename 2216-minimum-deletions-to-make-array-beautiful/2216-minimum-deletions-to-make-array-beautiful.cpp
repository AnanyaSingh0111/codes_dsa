class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(count%2==0){
                if(i<n-1 && nums[i]==nums[i+1]){
                    ans++;
                    continue;
                }
            }
            count++;
        }
        if(count%2!=0)
        ans++;
        return ans;
    }
};