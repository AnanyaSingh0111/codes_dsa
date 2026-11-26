class Solution {
public:
    int calculate(vector<int>&nums,int div){
        int threshold=0;
        for(int x:nums){
            threshold+=(x+div-1)/div;
        }
        return threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxNo=*max_element(nums.begin(),nums.end());
        int low=1;
        int high=maxNo;
        int ans=maxNo;
        while(low<=high){
            int mid=(low+high)/2;
            int res=calculate(nums,mid);
            if(res<=threshold){
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
    }
};