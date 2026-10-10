class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(nums);
        reverse(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            nums.push_back(arr[i]);
        }
        return nums;
    }
};