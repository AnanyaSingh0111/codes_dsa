class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>tails;
        for(int x:nums){
            if(tails.empty() || x>tails.back()){
                tails.push_back(x);
            }
            else{
                int low=0;
                int high=tails.size()-1;
                while(low<=high){
                    int mid=(low+high)/2;
                    if(tails[mid]>=x){
                        high=mid-1;
                    }
                    else
                    low=mid+1;
                }
                tails[low]=x;
            }
        }
        return tails.size();
    }
};