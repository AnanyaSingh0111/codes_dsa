class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int n=queries.size();
        vector<int>ans(n,-1);
        vector<int>positions;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x)
            positions.push_back(i);
        }
        for(int i=0;i<n;i++){
            int k=queries[i];
            if(k<=positions.size()){
                ans[i]=positions[k-1];
            }
        }
return ans;
    }
};