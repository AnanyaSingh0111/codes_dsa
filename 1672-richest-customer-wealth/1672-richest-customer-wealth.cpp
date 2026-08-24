class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res=0;
        int ans=INT_MIN;
        for(int i=0;i<accounts.size();i++){
            for(int num:accounts[i]){
                res+=num;
            }
            ans=max(ans,res);
            res=0;
        }
        return ans;
    }
};