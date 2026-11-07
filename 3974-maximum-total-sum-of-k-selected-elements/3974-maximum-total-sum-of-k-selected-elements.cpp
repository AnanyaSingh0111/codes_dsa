class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end(),greater<int>());
        vector<int>select(k);
        for(int i=0;i<k;i++){
            select[i]=nums[i];
        }
        long long sum=0;
        for(int i=0;i<k;i++){
            if(mul>0){
            sum+=(long long)select[i]*mul;
            mul--;
            }
            else
            sum+=select[i];
        }
        return sum;
    }
};