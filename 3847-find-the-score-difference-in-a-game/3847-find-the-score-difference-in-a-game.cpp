class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int n=nums.size();
        int first=0,second=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                flag=!flag;
            }
            if(i%6==5){
                flag=!flag;
            }
            if(flag){
                first+=nums[i];
            }
            else
            second+=nums[i];
        }
        return (first-second);
    }
};