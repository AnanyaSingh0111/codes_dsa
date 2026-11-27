class Solution {
public:
    int minDeletion(vector<int>& nums) {
        stack<pair<int,int>>st;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(st.empty()){
            st.push({nums[i],0});
            count++;
            }
           else if(st.top().first==nums[i] && st.top().second%2==0)
            continue;
            else{
            st.push({nums[i],count});
            count++;
            }
        }
        if(st.size()%2==0)
        return n-st.size();
        else
        return n-st.size()+1;
    }
};