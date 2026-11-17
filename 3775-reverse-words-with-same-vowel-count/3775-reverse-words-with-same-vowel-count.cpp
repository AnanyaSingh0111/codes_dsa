class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int count=0;
        int ind=-1;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                ind=i;
                break;
            }
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||
            s[i]=='o' || s[i]=='u')
            count++;
        }
        if(ind == -1)
          return s;
        int start=ind+1;
        int vowel=0;
        int words=0;
        for(int i=ind+1;i<=n;i++){
            if(i==n || s[i]==' '){
                if(vowel==count){
                    reverse(s.begin()+start,s.begin()+i);
                }
                start=i+1;
                words=0;
                vowel=0;
            }
            else{
            words++;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||
            s[i]=='o' || s[i]=='u')
            vowel++;
            }
        }
        return s;
    }
};