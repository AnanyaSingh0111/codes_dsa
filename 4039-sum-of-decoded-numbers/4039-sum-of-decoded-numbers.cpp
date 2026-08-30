class Solution {
public:
    long long power(long long x,long long y){
        long long MOD=1000000007;
        long long ans=1;
        while(y>0){
            if(y%2==1){
                ans=(ans*x)%MOD;
            }
            x=(x*x)%MOD;
            y/=2;
        }
        return ans;
    }
    int sumDecoded(vector<long long>& nums) {
        int n=nums.size();
        long long ans=0;
        long long MOD=1000000007;
        for(long long x:nums){
            long long width=x%10;
            long long d=x/10;
            string s=to_string(d);
            long long z=stoll(s.substr(0,width));
            long long y=stoll(s.substr(width));
            ans=(ans+power(z,y))%MOD;
        }
        return ans;
    }
};