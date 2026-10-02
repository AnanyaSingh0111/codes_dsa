class Solution {
public:
    void solve(int n,string curr,int open,int close,vector<string>&res){
        if(curr.length()==2*n){
            res.push_back(curr);
            return;
        }
        if(open<n)
        solve(n,curr+'(',open+1,close,res);
        if(close<open)
        solve(n,curr+')',open,close+1,res);
    }
    vector<string> generateParenthesis(int n) {
       vector<string>res;
       solve(n,"",0,0,res);
       return res;
    }
};