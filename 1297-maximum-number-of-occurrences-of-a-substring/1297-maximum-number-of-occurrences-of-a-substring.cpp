class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int n=s.size();
        int count=0;
        int i=0;
        int j=0;
        unordered_map<string,int>mp;
        vector<int>freq(26,0);
        int unique=0;
        int ans=0;
        while(j<n){
            if(freq[s[j]-'a']==0)
            unique++;
            freq[s[j]-'a']++;
            j++;
            if(j-i==minSize){
                if(unique<=maxLetters){
                    string sub=s.substr(i,minSize);
                    mp[sub]++;
                    ans=max(mp[sub],ans);
                }
                freq[s[i]-'a']--;
                if(freq[s[i]-'a']==0)
                unique--;
                i++;
            }
        }
        return ans;
    }
};