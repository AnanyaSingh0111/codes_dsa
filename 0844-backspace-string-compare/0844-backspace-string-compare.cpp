class Solution {
public:
    string solve(string s){
        stack<char>st;
        for(char ch:s){
            if(ch=='#'){
                if(!st.empty()){
            st.pop();
                }
            }
            else
            st.push(ch);
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
    bool backspaceCompare(string s, string t) {
        string s1=solve(s);
        string s2=solve(t);
        return s1==s2;
    }
};