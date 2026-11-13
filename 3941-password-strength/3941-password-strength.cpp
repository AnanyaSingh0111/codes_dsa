class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char>seen;
        int ans=0;
        for(char c:password){
            if(seen.count(c))
            continue;
            seen.insert(c);
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