class Solution {
public:
    long long number(int n){
        vector<int>arr;
        while(n>0){
            arr.push_back(n%10);
            n/=10;
        }
        sort(arr.begin(),arr.end(),greater<int>());
        long long num=0;
        for(int i=0;i<arr.size();i++){
            num=num*10+arr[i];
        }
        return num;
    }
    long long maximizeSum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<pair<long long,int>>gains;
        for(int i=0;i<n;i++){
            long long newNum=number(nums[i]);
            long long gain=newNum-nums[i];
            if(gain>0){
                gains.push_back({gain,i});
            }
        }
        sort(gains.begin(),gains.end(),greater<pair<long long,int>>());
        for(int i=0;i<min(k,(int)gains.size());i++){
            int index=gains[i].second;
            nums[index]=number(nums[index]);
        }
        long long sum=0;
        for(int x:nums){
            sum+=x;
        }
        return sum;
    }
};