class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long first=min(need1,need2);
        long long sum=0;
        sum+=(long long )(first*min(costBoth,cost1+cost2));
        if(need2<need1){
            long long remaining=need1-need2;
            sum+=remaining*min(costBoth,cost1);
        }
        if(need2>need1){
            long long remaining=need2-need1;
            sum+=remaining*min(costBoth,cost2);
        }
        return sum;
    }
};