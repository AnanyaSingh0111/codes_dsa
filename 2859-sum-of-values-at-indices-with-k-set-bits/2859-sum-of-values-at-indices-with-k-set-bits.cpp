class Solution {
public:
    int calculate(int n){
        int count=0;
        int u=n;
        while(u>0){
            u=u&(u-1);
            count++;
        }
        return count;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int res=calculate(i);
            if(res==k)
            ans+=nums[i];
        }
        return ans;
    }
};