class Solution {
public:
    long long gcd(int a,int b){
        if(a==0)
        return b;
        return gcd(b%a,a);
    }
    long long lcmOfTwo(int a,int b){
        if(a==0 || b==0)
        return 0;
        return (a / gcd(a, b)) * b;
    }
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int ans=2;
        for(int i=0;i<n-1;i++){
            if(gcd(nums[i],nums[i+1])!=1)
            continue;
            for(int j=i+2;j<n;j++){
                bool valid=true;
                for(int k=i;k<j;k++){
                    if(gcd(nums[k],nums[j])!=1){
                        valid=false;
                        break;
                    }
                }
                if(!valid)
                break;
                ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};