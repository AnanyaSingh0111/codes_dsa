class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=1;
        int ans=0;
        int n=prices.size();
        while(j<n){
            if(prices[i]>prices[j]){
                i=j;
                j=i+1;
            }
            else{
                while(j+1<n && prices[j]<prices[j+1])
                j++;
                ans+=prices[j]-prices[i];
                i=j;
                j=i+1;
            }

        }
        return ans;
    }
};