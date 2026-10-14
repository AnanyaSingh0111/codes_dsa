class Solution {
public:
    bool vowel(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
    string trimTrailingVowels(string s) {
        int n=s.size();
        if(!vowel(s[n-1]))
        return s;
        for(int i=n-1;i>=0;i--){
            if(vowel(s[i]))
            continue;
            return s.substr(0,i+1);
        }
        return "";
    }
};