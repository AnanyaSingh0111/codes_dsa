class Solution {
public:
    long long calculate(vector<int>&candies,int divide){
        long long total=0;
        for(int candy:candies){
            total+=(candy)/divide;
        }
        return total;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int low=1;
        int max_pile=*max_element(candies.begin(),candies.end());
        int high=max_pile;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            long long totalCandies=calculate(candies,mid);
            if(totalCandies>=k){
                ans=mid;
                low=mid+1;
            }
            else
            high=mid-1;
        }
        return ans;
    }
};