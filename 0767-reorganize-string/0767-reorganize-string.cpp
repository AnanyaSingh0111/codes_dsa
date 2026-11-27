class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        int count=0;
        int maxi=1;
        char el=0;
        for(auto &it:mp){
            if(it.second>maxi){
                maxi=it.second;
                el=it.first;
            }
        }
        if(maxi>(n+1)/2)
        return "";
        string ans(n,' ');
        int ind=0;
        while(mp[el]>0){
            ans[ind]=el;
            ind+=2;
            mp[el]--;
        }
        for(auto &it:mp){
            char ch=it.first;
            while(it.second>0){
                if(ind>=n)
                ind=1;
                ans[ind]=ch;
                ind+=2;
                it.second--;
            }
        }
        return ans;
    }
};