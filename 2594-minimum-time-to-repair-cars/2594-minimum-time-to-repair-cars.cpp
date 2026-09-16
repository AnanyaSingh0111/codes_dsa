class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long low=0;
        int mini=*min_element(ranks.begin(),ranks.end());
        long long high=1LL*mini*cars*cars;
        while(low<high){
            long long mid=(low+high)/2;
            long long repaired=0;
            for(int rank:ranks){
                repaired+=sqrt(1.0*mid/rank);
                if(repaired>=cars)
                break;
            }
            if(repaired>=cars)
            high=mid;
            else
            low=mid+1;
        }
        return low;
    }
};