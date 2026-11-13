class Solution {
public:
    int passwordStrength(string password) {
        set<char>st(password.begin(),password.end());
        int ans=0;
        for(char c:st){
            if(c>='a' && c<='z'){
                ans+=1;
            }
            else if(c>='A' && c<='Z'){
                ans+=2;
            }
            else if(c>='0' && c<='9'){
                ans+=3;
            }
            else
            ans+=5;
        }
        return ans;
    }
};