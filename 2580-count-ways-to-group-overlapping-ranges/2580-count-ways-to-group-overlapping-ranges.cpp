class Solution {
public:
    long long calculate(long long a,long long b){
        long long MOD=1e9+7;
        long long ans=1;
        while(b>0){
            if(b%2==1){
                ans=(ans*a)%MOD;
            }
            a=(a*a)%MOD;
            b/=2;
        }
        return ans;
    }
    int countWays(vector<vector<int>>& ranges) {
        sort(ranges.begin(),ranges.end());
        int n=ranges.size();
        if(n==0)
        return 1;
        vector<vector<int>>ans;
        ans.push_back(ranges[0]);
        for(int i=1;i<n;i++){
            if(ranges[i][0]<=ans.back()[1]){
            ans.back()[1]=max(ranges[i][1],ans.back()[1]);
            }
        else
        ans.push_back(ranges[i]);
        }
        int k=ans.size();
        return calculate(2,k);

    }
};