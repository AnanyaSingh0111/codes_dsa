class Solution {
public:
    int minInsertions(string s) {
        int ans=0;
        int open=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            open++;
            else{
                if(open==0){
                    ans++;
                    open++;
                }
                open--;
                if(i+1>0 && s[i+1]==')'){
                    i++;
                }
                else
                ans++;
            }
        }
         ans+=2*open;
        return ans;
    
    }
};