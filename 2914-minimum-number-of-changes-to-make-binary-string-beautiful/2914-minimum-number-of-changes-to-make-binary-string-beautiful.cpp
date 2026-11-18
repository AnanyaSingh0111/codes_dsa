class Solution {
public:
    int minChanges(string s) {
        int n=s.size();
        int i=1;
        int count=0;
        while(i<n){
            char ch=s[i];
            if(ch==s[i-1]){
                i+=2;
            continue;
            }
            else{
            count++;
            i+=2;
            }
        }
        return count;
    }
};