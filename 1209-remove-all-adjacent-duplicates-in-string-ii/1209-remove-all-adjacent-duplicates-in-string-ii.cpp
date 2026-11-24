class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(!st.empty() && st.top().first==s[i]){
                int count=st.top().second;
                st.pop();
                count++;
                if(count==k)
                continue;
                st.push({s[i],count});
            }
            else
            st.push({s[i],1});
        }
        string ans="";
        while(!st.empty()){
            ans+=string(st.top().second,st.top().first);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};