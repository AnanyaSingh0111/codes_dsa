class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n=bulbs.size();
        set<int>st;
        for(int i=0;i<n;i++){
            if(st.count(bulbs[i])){
                st.erase(bulbs[i]);
            }
            else
            st.insert(bulbs[i]);
        }
        vector<int>ans(st.begin(),st.end());
        return ans;
    }
};