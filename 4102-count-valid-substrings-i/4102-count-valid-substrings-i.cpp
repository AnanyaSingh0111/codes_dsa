class Solution {
public:
    long long countValidSubstrings(string s) {
        long long ans=0;
        int last=-1;
        for(int i=0;i<s.size();i++){
            if(i>=2 && s[i]=='c' && s[i-1]=='b' && s[i-2]=='a'){
                last=i-2;
            }
            ans+=i-last;
        }
        return ans;
    }
};