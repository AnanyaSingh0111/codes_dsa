class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char,int>mp;
        int n=s.size();
        for(char c:s){
            mp[c]++;
        }
        for(auto &it:mp){
            if(it.first==letter)
            return (it.second*100)/n;
        }
        return 0;
    }
};