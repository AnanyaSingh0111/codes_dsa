class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans;
        long long sum2=sum;
        while(num){
            if(sum>=10){
                ans+='9';
                sum-=9;
            }
            else if(sum>0){
                ans+=(sum+'0');
                sum=0;
            }
            else{
                ans+='0';
            }
            num--;
        }
        long long s=0;
        for(int i=0;i<ans.size();i++){
            s+=(ans[i]-'0');
        }
        if(s!=sum2)
        return "";
        return ans;
    }
};