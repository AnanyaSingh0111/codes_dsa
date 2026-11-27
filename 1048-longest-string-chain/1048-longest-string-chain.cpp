class Solution {
public:
    unordered_set<string>st;
    unordered_map<string,int>dp;
        int dfs(string word){
            if(dp.find(word)!=dp.end())
            return dp[word];
            int ans=1;
            for(int i=0;i<word.size();i++){
                string prev=word.substr(0,i)+word.substr(i+1);
            if(st.find(prev)!=st.end()){
                ans=max(ans,1+dfs(prev));
            }
            }
            return dp[word]=ans;
        }
    int longestStrChain(vector<string>& words) {
        for(string s:words){
            st.insert(s);
        }
        int ans=1;
        for(string s:words){
            ans=max(ans,dfs(s));
        }
        return ans;
    }
};