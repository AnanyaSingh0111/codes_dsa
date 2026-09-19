class Solution {
public:
    bool possible(int n,vector<int>&quantities,int x){
        int stores=0;
        for(int product:quantities){
            stores+=(product+x-1)/x;
        }
        if(stores>n)
        return false;
        return true;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low=1;
        int high=*max_element(quantities.begin(),quantities.end());
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(n,quantities,mid)){
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
    }
};