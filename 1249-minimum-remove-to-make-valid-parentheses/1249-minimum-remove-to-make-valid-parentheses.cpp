class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open=0;
        string ans="";
        for(char ch:s){
            if(ch=='('){
                ans+=ch;
                open++;
            }
            else if(ch==')'){
                if(open>0){
                    ans+=ch;
                    open--;
                }
            }
            else
            ans+=ch;
        }
        string res="";
        for(int i=ans.size()-1;i>=0;i--){
            if(ans[i]=='(' && open>0){
                open--;
                continue;
            }
            res+=ans[i];
        }
        reverse(res.begin(),res.end());
        return res;
    }
};