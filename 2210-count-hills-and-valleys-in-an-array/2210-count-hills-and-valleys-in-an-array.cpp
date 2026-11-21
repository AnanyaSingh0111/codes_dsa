class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int>a;
        int count=0;
        for(int x:nums){
            if(a.empty() || a.back()!=x)
            a.push_back(x);
        }
        for(int i=1;i<a.size()-1;i++){
            if((a[i]>a[i-1] && a[i]>a[i+1]) || (a[i]<a[i-1] && a[i]<a[i+1]))
            count++;
        }
        return count;
    }
};