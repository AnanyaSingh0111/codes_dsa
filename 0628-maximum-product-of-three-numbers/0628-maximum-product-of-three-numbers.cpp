class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int i=0;
        int j=n-1;

        while(i<=j){

            if(nums[i]*nums[j]>0){
                return nums[j]*nums[j-1]*nums[j-2];
            }

           else if(nums[j]*nums[j-1]*nums[j-2] >
                    nums[i]*nums[i+1]*nums[j]){
                return nums[j]*nums[j-1]*nums[j-2];
            }

            else return nums[i]*nums[i+1]*nums[j];
        }

        return 0;
    }
};