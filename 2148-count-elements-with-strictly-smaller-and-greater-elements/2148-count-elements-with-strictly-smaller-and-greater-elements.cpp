class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int count1=0,count2=0;
        int n=nums.size();
        for(int x:nums){
            if(x>maxi){
            maxi=x;
            }
            if(x<mini){
            mini=x;
            }
        }
        for(int x:nums){
            if(x==maxi)
            count1++;
            if(x==mini)
            count2++;
        }
        if(mini==maxi) return 0;
        return (n-count1)-count2;
    }
};