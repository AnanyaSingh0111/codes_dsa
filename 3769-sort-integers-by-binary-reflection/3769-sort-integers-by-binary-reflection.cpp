class Solution {
public:
   int reflect(int n){
    int ans=0;
    while(n>0){
        ans=(ans*2)+(n%2);
        n/=2;
    }
    return ans;
   }
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int,int>>p;
        for(int x:nums){
            int decimal=reflect(x);
            p.push_back({decimal,x});
        }
        sort(p.begin(),p.end());
        vector<int>ans;
        for(auto &it:p){
            ans.push_back(it.second);
        }
        return ans;
    }
};