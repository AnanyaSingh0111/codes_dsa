class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(int x:nums){
            if(x/10==0)
            sum1+=x;
            else
            sum2+=x;
        }
        if(sum1==sum2)
        return false;
        return true;
    }
};