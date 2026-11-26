class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            vector<int>prefix;
           
            int j=i;
            int prod=1;
            while(j<n){
                 prod*=nums[j];
                if(prod<k)
                count++;
                else break;
                j++;
            }
        }
        return count;
    }
};